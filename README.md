# 基于QT高性能分布式云存储系统
基于QT平台搭建可以搜索好友、添加好友、好友聊天、提供文件同步，备份及共享等服务的网络云存储平台。

# 项目技术 
C++、多线程、SQLite3数据库、TCP Socket网络编程、QT（5.14.2）

# SQLite3安装教程
https://blog.csdn.net/lj19990824/article/details/120966250

# 项目开源参考视频
https://www.bilibili.com/video/BV1bR4y1774v?p=1

# 🚀 高性能分布式云存储系统（基于 Qt & C++）  

![Qt](https://img.shields.io/badge/Qt-5.1+-brightgreen.svg)  
![C++](https://img.shields.io/badge/C++-17-blue.svg)  
![License](https://img.shields.io/badge/License-MIT-red.svg)  

## 🌟 项目简介  
本项目是一个基于 **Qt + C++** 开发的 **高性能分布式云存储系统**，支持**文件存储、同步、备份、共享**等核心功能，采用**多线程架构、分布式存储策略**，优化网络传输效率，保证数据的高可用性和一致性。  

✅ **支持高并发的分布式存储架构**，提升系统吞吐量  
✅ **Qt + C++ 可视化客户端**，操作简洁高效  
✅ **多线程 TCP/WebSocket 通信**，低延迟高可靠性  
✅ **SQLite3 轻量级数据库管理**，高效存储用户数据  
✅ **断点续传 + 数据加密**，保障文件传输完整性与安全性  

---

## 🏗️ 技术架构  

### **1️⃣ 系统架构设计**  
本项目采用 **C/S（Client/Server）架构**，服务器端支持**分布式存储**，可扩展多个存储节点，提升存储能力和容灾能力。  
📌 **架构图示例**：  
┌───────────────┐ ┌───────────────┐ ┌───────────────┐ │ 客户端A │ ---> │ 负载均衡器 │ ---> │ 存储节点1 │ │ (Qt GUI) │ │ (主服务器) │ │ (数据库) │ └───────────────┘ └───────────────┘ └───────────────┘ | | | ┌───────────────┐ ┌───────────────┐ ┌───────────────┐ │ 客户端B │ ---> │ API 网关 │ ---> │ 存储节点2 │ └───────────────┘ └───────────────┘ └───────────────┘


### **2️⃣ 技术选型**
| 技术 | 说明 |
|------|------|
| **Qt 6.5+** | 提供跨平台 GUI 界面，采用信号-槽机制优化交互 |
| **C++ 17** | 提供高性能网络通信和数据处理能力 |
| **SQLite3** | 轻量级数据库，存储用户信息、文件索引等 |
| **TCP/WebSocket** | 服务器与客户端的通信协议，确保数据实时同步 |
| **多线程** | 服务器端采用线程池模型，提高并发处理能力 |
| **分布式存储** | 通过多个存储节点均衡存储文件，防止单点故障 |
| **AES 加密** | 保障用户文件传输过程中的数据安全性 |

---

## ⚙️ 核心功能  
### 🔹 **客户端**
- **Qt GUI 可视化界面**，支持**文件管理、存储、下载**  
- **拖拽上传 & 断点续传**，提升用户体验  
- **好友管理 & 聊天系统**，可实时共享文件  

### 🔹 **服务器**
- **基于多线程的高并发处理**，支持大规模用户请求  
- **分布式存储架构**，支持多存储节点**水平扩展**  
- **AES 加密 & 数据校验**，保障数据完整性和安全性  

---

## 🚀 快速启动（开发者指南）

### **1️⃣ 运行服务器**
```bash
git clone https://github.com/你的GitHub/Qt-CloudStorage.git
cd Qt-CloudStorage/server
mkdir build && cd build
cmake ..
make
```
./CloudStorageServer
cd Qt-CloudStorage/client
qtcreator CloudStorage.pro
使用 Qt Creator 编译 & 运行，即可启动客户端 🎉

📈 未来优化方向
🔹 支持 P2P 直连，减少服务器带宽压力
🔹 Web 端适配，实现浏览器直接访问云盘
🔹 支持分块存储 + 断点续传优化，提升大文件上传稳定性
🔹 Docker 部署，一键安装，适配不同环境

📝 开源协议
本项目采用 MIT License，欢迎 Star & Fork 🚀

🎯 联系方式
📌 GitHub：https://github.com/kawa1909
📌 Email：1265865927@qq.com

🙌 如果你觉得这个项目有帮助，欢迎 ⭐Star 支持！
