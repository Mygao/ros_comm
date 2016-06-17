#ifndef _ROS_MSG_H_
#define _ROS_MSG_H_

namespace ros {

/* Base Message Type */
class Msg
{
	public:
		virtual int serialize(unsigned char *outbuffer) const = 0;
		virtual int deserialize(unsigned char *data) = 0;
		virtual const char * getType() = 0;
		virtual const char * getMD5() = 0;
};

}

#endif