# ROS ros_comm for Visual Studio

ROS ros_comm for Windows Visual Studio IDE environment. 

Please be notified that this is made for bridging some Windows applications with ROS environment so the VS project itself is not well organized.

Original ros_comm package sources are come from Kinetic release and had few modifications.

Because the message code generator was not ported(and other tools either), some message header files are copied from the package of ROS Indigo on Ubuntu 14.04 and nav_msg from Kinetic on Ubuntu 16.04.
(You need to import message headers matching your application.)

Tested on Microsoft VisualStudio(msvc) 2013 Community Edition with Boost 1.61.

# Note

 Environment varialbes(ROS_IP and ROS_MASTER_URI) must be set to run example application(main.cpp).

#Dependency
 
 Boost library(1.58+) must be installed.
 
 Environment variables BOOST_ROOT_DIR(where Boost is installed including headers) and BOOST_LIB_DIR (where Boost binaries exists) must be set.
