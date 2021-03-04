<!--
 * @Author: Dongying
 * @Date: 2021-03-04 11:08:43
 * @LastEditTime: 2021-03-04 14:05:15
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WebSocket2/README.md
-->

## 软件信息
websocketpp使用的是0.82版本，github链接为：https://github.com/zaphoyd/websocketpp

## url链接信息
connect ws://192.168.1.142:18001/ws?client_type=edge1&id=1

## 使用说明
show   接受并显示服务端发送的信息
对于接受到的信息通过视频流url topic信息，与之连接才可以抓取数据。
send + 信息   向服务器端发送信息
发送消息的格式需为： {
    "type": "crane_info",  //消息的类型 alarm报警消息 conf_device设备参数热更新
    //注意这个 应该是个json字符串
    "data":{
    "position":[
    {"position": 651.313863662449, 'id': 3}, 
    {"position": 480.5921438366842, 'id': 4}
    ]
    }
