
#include <chrono>
#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"

using namespace std::chrono_literals;

class TemperatureSensorNode : public rclcpp::Node
{
public:
    TemperatureSensorNode()
    : Node("temperature_sensor_node"), current_temperature_(20.0)
    {
        temperature_sensor_publisher_ = this->create_publisher<std_msgs::msg::Float64>("temperature", 5);
        timer_ = this->create_wall_timer(1s, std::bind(&TemperatureSensorNode::publish_temperature, this));
    }

private:
    void publish_temperature()
    {
        auto message = std_msgs::msg::Float64();
        message.data = current_temperature_;
        temperature_sensor_publisher_->publish(message);

        RCLCPP_INFO(this->get_logger(), "Publishing: '%.2f'", message.data);

        current_temperature_ += 0.5;
    }

    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr temperature_sensor_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    double current_temperature_;
};


int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TemperatureSensorNode>());
  rclcpp::shutdown();
  return 0;
}