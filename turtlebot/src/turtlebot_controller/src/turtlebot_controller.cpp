#include <iostream>
#include <string>

using std::string;

#include "rclcpp/rclcpp.hpp"

class TurtlebotController::TurtlebotController() : public rclcpp::Node{
    
}

int main(int argc, char ** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<TurtlebotController>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}