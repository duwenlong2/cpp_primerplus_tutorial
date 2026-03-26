# C++ Primer Plus 学习项目

## 项目简介

本项目用于系统学习《C++ Primer Plus》第六版（中文版），每章一个子目录，记录学习过程、代码实践和心得体会，便于后续整理成博客并分享到 GitHub。

---

## 1. 环境搭建

### 1.1 安装 VS Code
- 官网下载并安装：[https://code.visualstudio.com/](https://code.visualstudio.com/)

### 1.2 安装 C++ 扩展
- 打开 VS Code，进入扩展（Extensions）面板，搜索并安装：
  - C/C++（Microsoft 出品）
  - CMake Tools（可选，适合大型项目）

### 1.3 安装 C++ 编译器
- Windows 推荐 MinGW-w64：
  - 官网下载：[https://www.mingw-w64.org/](https://www.mingw-w64.org/)
  - 点击 downloads 选择“预构建工具链”，继续选择“MinGW-W64 版本”，它会跳转至 https://www.mingw-w64.org/downloads/#mingw-w64-builds，继续选择 MinGW 的 github 连接，跳转至 https://github.com/niXman/mingw-builds-binaries/releases
  - github.com 由于在某些环境下需要翻墙，建议自己解决翻墙问题，不然直接检索 x86_64-15.2.0-release-posix-she-ucrt-rt_v13-rev1.7z 也行。但是还是建议解决翻墙问题。毕竟很多东西需要翻墙方便一些。
  - **推荐下载**：`x86_64-15.2.0-release-posix-she-ucrt-rt_v13-rev1.7z`
    - `x86_64`：64 位版本，适合绝大多数现代 Windows 系统。
    - `posix`：线程模型，兼容性好，推荐。
    - `seh`：异常处理方式，适合 64 位系统。
    - `ucrt`：使用新版 Windows C 运行库，兼容性更好。
  - 下载后解压，将 `bin` 目录加入 Path 环境变量。
  - 用 `g++ --version` 验证安装。
  - **验证安装输出示例：**
    ```
    g++.exe (x86_64-posix-seh-rev1, Built by MinGW-Builds project) 15.2.0
    Copyright (C) 2025 Free Software Foundation, Inc.
    This is free software; see the source for copying conditions.  There is NO
    warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
    ```

---
## 基础准备就这么多。去各个目录下开始学习。