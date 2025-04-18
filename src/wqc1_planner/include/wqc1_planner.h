#ifndef WQC1_PLANNER_H
#define WQC1_PLANNER_H

#include <ros/ros.h>
#include <nav_core/base_local_planner.h>

namespace wqc1_planner
{
    class Wqc1Planner : public nav_core::BaseLocalPlanner
    {
        public:
            Wqc1Planner();
            ~Wqc1Planner();

            void initialize(std::string name, tf2_ros::Buffer* tf,costmap_2d::Costmap2DROS* costmap_ros);
            bool setPlan(const std::vector<geometry_msgs::PoseStamped>& plan);
            bool computeVelocityCommands(geometry_msgs::Twist& cmd_vel);
            bool isGoalReached();
    };

}

#endif