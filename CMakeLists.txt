# find required opencv
find_package(OpenCV REQUIRED)
# directory of opencv headers
include_directories(${OpenCV_INCLUDE_DIRS})
# directory of opencv library
link_directories(${OpenCV_LIBRARY_DIRS})

# cmake最低版本号要求
cmake_minimum_required (VERSION 2.8)
# 设置PROJECT_NAME变量
set(PROJECT_NAME OPENCV_learning)
# 设置工程名
project (${PROJECT_NAME})
# 查找当前目录下的所有源文件并存入DIR_SRCS变量
aux_source_directory(src DIR_SRCS)
INCLUDE_DIRECTORIES(src)
INCLUDE_DIRECTORIES(include)

# make shared lib
#add_library(output_shared_lib SHARED src/1.cpp include/1.h)
#target_link_libraries(output_shared_lib ${OpenCV_LIBS})


add_executable (main src/main.cpp)

# 动态链接库加载
set(LINK_DIR /Users/hanz/Vispek/C-_opencv/lib)
link_directories(${LINK_DIR})
target_link_libraries(main ${LINK_DIR}/liboutput_shared_lib.dylib)

# opencv libraries
target_link_libraries(main ${OpenCV_LIBS})


# 递归列出所有源文件
#file (GLOB_RECURSE SOURCE_FILES *.cpp)
# 添加一个可编译的目标到工程
#add_executable (${PROJECT_NAME} ${DIR_SRCS})
#target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})

