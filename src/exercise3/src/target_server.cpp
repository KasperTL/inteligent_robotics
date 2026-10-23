
#include <memory>
#include <cmath>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/point.hpp"
#include "intelligent_robotics_msgs/srv/check_target.hpp"

using CheckTarget = intelligent_robotics_msgs::srv::CheckTarget;
using geometry_msgs::msg::Point; 

class TargetServer : public rclcpp::Node
{
public: 
    TargetServer() : Node("target_server")
    {
        service_ = this->create_service<CheckTarget>(
            "check_target", 
            [this](const std::shared_ptr<CheckTarget::Request> request,
                std::shared_ptr<CheckTarget::Response> response) 
            {
                handle_check_target(request, response);
            });
        RCLCPP_INFO(this->get_logger(), "Target server is ready.");
    }
private:
    void handle_check_target(
        const std::shared_ptr<CheckTarget::Request> request, 
        std::shared_ptr<CheckTarget::Response> response)
    {
        const double distance = euclidean_distance(request->current_position, request->target_position);
        response->distance_to_target = static_cast<float>(distance);

        if (request->distance_tolerance < 0.0)
        {
            RCLCPP_WARN(this->get_logger(), 
            "Invalid tolerance value: %.2f. Tolerance must be non-negative.", 
            request->distance_tolerance);
            response->is_target_reached = false;
            return;
        }

        response->is_target_reached = (distance <= request->distance_tolerance);

        RCLCPP_INFO(this->get_logger(),
            "Distance: %.3f m, tolerance: %.3f m -> %s",
            distance, request->distance_tolerance,
            response->is_target_reached ? "true" : "false");
    }

    static double euclidean_distance(const Point & a, const Point & b)
    {
        return std::hypot(a.x - b.x, a.y - b.y, a.z - b.z);
    }

    rclcpp::Service<CheckTarget>::SharedPtr service_;
};


int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TargetServer>());
    rclcpp::shutdown();
    return 0;
};