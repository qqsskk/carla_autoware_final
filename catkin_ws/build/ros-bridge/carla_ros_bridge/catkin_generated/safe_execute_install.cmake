execute_process(COMMAND "/home/lukas/carla/carla-autoware/catkin_ws/build/ros-bridge/carla_ros_bridge/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/lukas/carla/carla-autoware/catkin_ws/build/ros-bridge/carla_ros_bridge/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
