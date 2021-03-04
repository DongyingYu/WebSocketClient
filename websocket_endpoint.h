/*
 * @Author: Dongying
 * @Date: 2021-03-04 11:03:16
 * @LastEditTime: 2021-03-04 11:19:12
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WebSocket2/websocket_endpoint.h
 */
#ifndef _WEBSOCKET_ENDPOINT_
#define _WEBSOCKET_ENDPOINT_
 
#include <string>
 
namespace MySocket
{
	class websocket_endpoint {
	public:
		websocket_endpoint();
		~websocket_endpoint();
 
		int connect(std::string const & uri);
		void close();
 
		void send(std::string message);
		void show();
	};
}
 
#endif