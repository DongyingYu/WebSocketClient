cmake_minimum_required( VERSION 2.8 )
project( WebSocket2 )

#set( CMAKE_BUILD_TYPE "Release" )
#set( CMAKE_CXX_FLAGS "-std=c++11 -O3" )
set( CMAKE_CXX_FLAGS "-std=c++11 -g -O0" )


#SET(CMAKE_C_COMPILER /usr/bin/gcc)
#SET(CMAKE_CXX_COMPILER /usr/bin/g++)

find_package(Boost COMPONENTS program_options)
include_directories(${Boost_INCLUDE_DIRS})
link_directories(${Boost_LIBRARY_DIRS})

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/websocketpp
  ${CMAKE_CURRENT_SOURCE_DIR}/websocketpp/websocketpp
  ${CMAKE_CURRENT_SOURCE_DIR}/nlohmann
)

link_libraries(pthread
                -lboost_system)

add_executable( WebSocket2 main.cpp  
                websocket_endpoint.cpp)
target_link_libraries( WebSocket2 
    ${Boost_PROGRAM_OPTIONS_LIBRARY}
    ${Boost_LIBRARY_DIRS}
 )