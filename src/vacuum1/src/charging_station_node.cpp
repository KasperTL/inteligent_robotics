#include <chrono>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "intelligent_robotics_msgs/msg/vacuum_cleaner_status.hpp"

using namespace std::chrono_literals;

class charging_station_node : public rclcpp::Node
{
public:
    charging_station_node() : Node("charging_station_node")
    {
        auto topic_callback = [this](const intelligent_robotics_msgs::msg::VacuumCleanerStatus::SharedPtr msg) {
            RCLCPP_INFO(this->get_logger(),
                    "Robot in '%s' (id %u), battery %.2f%%",
                    msg->room_name.c_str(), msg->room_id,
                    msg->battery_percent);
        };
        chargin_station_subscriber_ = this->create_subscription<intelligent_robotics_msgs::msg::VacuumCleanerStatus>(
            "vacuum_cleaner_status", 5, topic_callback);
    }

private:
  rclcpp::Subscription<intelligent_robotics_msgs::msg::VacuumCleanerStatus>::SharedPtr chargin_station_subscriber_;

};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<charging_station_node>());
    rclcpp::shutdown();
    return 0;
}
