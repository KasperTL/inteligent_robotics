
#include <chrono>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "intelligent_robotics_msgs/msg/vacuum_cleaner_status.hpp"

using namespace std::chrono_literals;

class vacuum_cleaner_node : public rclcpp::Node
{
public:
    vacuum_cleaner_node() : Node("vacuum_cleaner_node")
    {
        vacuum_cleaner_publisher_ = this->create_publisher<intelligent_robotics_msgs::msg::VacuumCleanerStatus>("vacuum_cleaner_status", 5);
    
        auto timer_callback  =[this](){
            auto message = intelligent_robotics_msgs::msg::VacuumCleanerStatus();
            message.room_name = room_name;
            message.room_id = room_id;
            message.battery_percent = battery_percent;
            RCLCPP_INFO(this->get_logger(), "Publishing: '%s', Room ID: %d, Battery Level: %.2f%%", message.room_name.c_str(), message.room_id, message.battery_percent);
            vacuum_cleaner_publisher_->publish(message);
        };
        timer_ = this->create_wall_timer(1s, timer_callback);
    }

private:
    std::string room_name;
    int8_t room_id;
    float battery_percent;

    rclcpp::Publisher<intelligent_robotics_msgs::msg::VacuumCleanerStatus>::SharedPtr vacuum_cleaner_publisher_;

    rclcpp::TimerBase::SharedPtr timer_;
};


int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<vacuum_cleaner_node>());
    rclcpp::shutdown();
    return 0;
}


