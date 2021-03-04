/*
 * @Author: Dongying
 * @Date: 2021-03-04 11:03:00
 * @LastEditTime: 2021-03-04 11:20:20
 * @LastEditors: Please set LastEditors
 * @Description: 0.1
 * @FilePath: /WebSocket2/main.cpp
 */
#include <iostream>
#include <string>
#include <sstream>
 
#include "websocket_endpoint.h"
 
int main(int argc, char **argv)
{
	bool done = false;
	std::string input;
	MySocket::websocket_endpoint endpoint;
 
	endpoint.connect("ws://192.168.1.142:18001/ws?client_type=edge1&id=1");
 
	while (!done) {
		std::cout << "Enter Command: ";
		std::getline(std::cin, input);
 
		if (input == "quit") {
			done = true;
		}
		else if (input.substr(0, 4) == "send") {
			std::stringstream ss(input);
 
			std::string cmd;
			std::string message;
 
			ss >> cmd;
			std::getline(ss, message);
 
			endpoint.send(message);
		}
		else if (input.substr(0, 4) == "show") {
			endpoint.show();
		}
		else {
			std::cout << "> Unrecognized Command" << std::endl;
		}
	}
 
	endpoint.close();
 
	return 0;
}