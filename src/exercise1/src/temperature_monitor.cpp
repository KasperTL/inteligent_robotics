#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"

class TemperatureMonitorNode : public rclcpp::Node
{
public:
    TemperatureMonitorNode() : Node("temperature_monitor_node")
    {
        temperature_monitor_subscriber_ = this->create_subscription<std_msgs::msg::Float64>(
            "temperature",
            5,
            std::bind(&TemperatureMonitorNode::subscriber_temperature, this, std::placeholders::_1));
    }

private:
    void subscriber_temperature(const std_msgs::msg::Float64::SharedPtr msg)
    {
        if (msg->data > 25.0)
        {
            RCLCPP_WARN(this->get_logger(), "Temperature is above 25 degrees: '%.2f'", msg->data);
        }
        else
        {
            RCLCPP_INFO(this->get_logger(), "Temperature is normal: '%.2f'", msg->data);
        }
    }

    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr temperature_monitor_subscriber_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TemperatureMonitorNode>());
    rclcpp::shutdown();
    return 0;
}