#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

#include <sstream>

//Example application 

#if 0
int main(int argc, char **argv)
{
	ros::init(argc, argv, "talker_win");

	ros::NodeHandle n;

	ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter", 1000);

	ros::Rate loop_rate(10);

	int count = 0;

	while (ros::ok())
	{
		std_msgs::String msg;

		std::stringstream ss;

		ss << "hello windows" << count;

		msg.data = ss.str();

		ROS_INFO("%s", msg.data.c_str());

		chatter_pub.publish(msg);

		ros::spinOnce();

		loop_rate.sleep();
		++count;
	}

	return 0;
}
#else

void chatterCallback(const geometry_msgs::Twist::ConstPtr& msg)
{
	ROS_INFO("I heard: [%d]", msg->linear.x);
}

int main(int argc, char **argv)
{
	ros::init(argc, argv, "listener");

	ros::NodeHandle n;

	ros::Subscriber sub = n.subscribe("/cord/cmd_vel", 1000, chatterCallback);
	
	ros::spin();

	return 0;
}

#endif