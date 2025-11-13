1. 构建：

colcon build --packages-select my_rm_scripts

2. 环境：

source install/setup.bash

3. 启动rviz，gazebo：

ros2 launch rm_bringup rm_65_gazebo.launch.py

4.启动节点
ros2 run my_rm_scripts move_rm65_client