# CMake generated Testfile for 
# Source directory: /ros2_ws/src/openzenros2
# Build directory: /ros2_ws/build/openzen_driver
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_openzen_test.launch.py "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/ros2_ws/build/openzen_driver/test_results/openzen_driver/test_openzen_test.launch.py.xunit.xml" "--package-name" "openzen_driver" "--output-file" "/ros2_ws/build/openzen_driver/launch_test/test_openzen_test.launch.py.txt" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/ros2_ws/src/openzenros2/test/openzen_test.launch.py" "--junit-xml=/ros2_ws/build/openzen_driver/test_results/openzen_driver/test_openzen_test.launch.py.xunit.xml" "--package-name=openzen_driver")
set_tests_properties(test_openzen_test.launch.py PROPERTIES  LABELS "launch_test" TIMEOUT "60" WORKING_DIRECTORY "/ros2_ws/build/openzen_driver" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/launch_testing_ament_cmake/cmake/add_launch_test.cmake;131;ament_add_test;/ros2_ws/src/openzenros2/CMakeLists.txt;46;add_launch_test;/ros2_ws/src/openzenros2/CMakeLists.txt;0;")
subdirs("openzen")
