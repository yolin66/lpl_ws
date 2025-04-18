#include "wqc1_planner.h"
#include <pluginlib/class_list_macros.h>

PLUGINLIB_EXPORT_CLASS(wqc1_planner::Wqc1Planner , nav_core::BaseLocalPlanner)

namespace wqc1_planner
{
    Wqc1Planner::Wqc1Planner()
    {
        setlocale(LC_ALL,"");       // 本地化加载字符串
    }
    Wqc1Planner::~Wqc1Planner()
    {}

    void Wqc1Planner::initialize(std::string name, tf2_ros::Buffer* tf,costmap_2d::Costmap2DROS* costmap_ros)
    {
        ROS_WARN("局部规划器初始化！");
    }

    bool Wqc1Planner::setPlan(const std::vector<geometry_msgs::PoseStamped>& plan)
    {
        return true;
    }

    bool Wqc1Planner::computeVelocityCommands(geometry_msgs::Twist& cmd_vel)
    {
        return true;
    }

    bool Wqc1Planner::isGoalReached()
    {
        return false;
    }

}

// #include "my_planner.h"
// #include <pluginlib/class_list_macros.h>

// PLUGINLIB_EXPORT_CLASS( my_planner::MyPlanner, nav_core::BaseLocalPlanner)

// namespace my_planner 
// {
//     MyPlanner::MyPlanner()
//     {
//         setlocale(LC_ALL,"");
//     }
//     MyPlanner::~MyPlanner()
//     {}

//     void MyPlanner::initialize(std::string name, tf2_ros::Buffer* tf, costmap_2d::Costmap2DROS* costmap_ros)
//     {
//         ROS_WARN("该我上场表演了！");
//     }
//     bool MyPlanner::setPlan(const std::vector<geometry_msgs::PoseStamped>& plan)
//     {
//         return true;
//     }
//     bool MyPlanner::computeVelocityCommands(geometry_msgs::Twist& cmd_vel)
//     {
//         return true;
//     }
//     bool MyPlanner::isGoalReached()
//     {
//         return false;
//     }
// } // namespace my_planner