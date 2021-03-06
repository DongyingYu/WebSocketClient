/*
 * @Author: Dongying
 * @Date: 2021-03-04 11:03:16
 * @LastEditTime: 2021-03-06 18:27:58
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WebSocket2/websocket_endpoint.h
 */
#pragma once
 
#include <string>
#include <nlohmann/json.hpp>
#include <iomanip>
 
namespace MySocket
{
	using json = nlohmann::json;
	class websocket_endpoint {
	public:
		websocket_endpoint();
		~websocket_endpoint();
 
		int connect(std::string const & uri);
		void close();
 
		void send(float posi_one, float posi_two, int id_one, int id_two);
		void show();
		std::string parsing();
	};
}