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

  ## 2. 推送代码到 GitHub 的流程

  本项目已经配置为使用 SSH 地址推送到 GitHub。以后建议固定按下面的顺序操作。

  ### 2.1 先查看当前状态

  在仓库根目录执行：

  ```powershell
  git status -sb
  ```

  如果看到类似下面的结果：

  ```powershell
  ## main...origin/main [ahead 1]
  ```

  说明本地有 1 个提交还没有推送到远端。

  ### 2.2 添加本次修改

  如果只是提交当前已经修改过的文件：

  ```powershell
  git add .
  ```

  如果只想提交某一个文件，也可以单独添加：

  ```powershell
  git add README.md
  ```

  然后提交：

  ```powershell
  git commit -m "填写本次修改说明"
  ```

  例如：

  ```powershell
  git commit -m "更新第一章学习代码"
  ```

  ### 2.3 推送到远端仓库

  执行：

  ```powershell
  git push origin main
  ```

  推送成功后，再执行一次：

  ```powershell
  git status -sb
  ```

  如果结果变成：

  ```powershell
  ## main...origin/main
  ```

  说明本地和远端已经同步。

  ### 2.4 如果推送时报 SSH key 错误

  先不要急着重新生成 key，先做这两个检查。

  检查 1：测试 GitHub SSH 认证

  ```powershell
  ssh -T git@github.com
  ```

  如果看到类似下面的结果，说明 key 本身是正常的：

  ```powershell
  Hi duwenlong2! You've successfully authenticated, but GitHub does not provide shell access.
  ```

  检查 2：测试当前仓库远端是否可访问

  ```powershell
  git ls-remote origin
  ```

  如果能看到远端分支信息，说明当前仓库的 SSH 访问也是正常的。

  这两个检查都通过后，再执行：

  ```powershell
  git push origin main
  ```

  ### 2.5 建议固定使用的完整命令顺序

  以后推送时，按下面顺序执行即可：

  ```powershell
  git status -sb
  git add .
  git commit -m "本次修改说明"
  git push origin main
  git status -sb
  ```

  ### 2.6 常见问题

  - 如果 `git status -sb` 里出现 `.exe` 文件，一般不建议提交编译产物。
  - 如果 `git commit` 提示没有可提交内容，说明你可能还没有修改文件，或者忘了 `git add`。
  - 如果 `git push origin main` 失败，先执行 `ssh -T git@github.com` 和 `git ls-remote origin`，确认是不是认证问题。

  ---

## 基础准备就这么多。去各个目录下开始学习。