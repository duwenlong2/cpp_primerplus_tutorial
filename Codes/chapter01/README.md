# 第1章 学习笔记

## 本章内容包括
- 创建C++程序;       hello.cpp
- C++程序的一般格式; hello.cpp
- #include 编译指令；hello.cpp
- main()函数；       hello.cpp
- 使用cout对象进行输出； hello.cpp
- 在C++程序中加入注释；hello.cpp
- 何时以及如何使用endl; hello.cpp
- 声明和使用变量;
- 使用cin 对象进行输入；
- 定义和使用简单函数。
--编译
cd "d:\Codes\githubCode\cpp_primerplus_tutorial\Codes\chapter01"; g++ hello.cpp -o hello.exe
 类定义描述的是数据格式及其用法，而对象则是根据数据格式规范创建的实体。

 复习题：
 1.C++程序的模块叫什么？ 
 一般叫“翻译单元” 对初学者来说就把每个 .cpp 源文件当作一个模块来理解——它连同所包含的头文件一起被编译成程序的一部分。C++20 还有正式的 module 语法，但入门可以先把 .cpp 当模块。

 2.下面的预处理器编译指令是做什么用的？
 #include <iostream>
  这行告诉编译器把标准输入输出相关的声明加入到你的代码中，从而可以使用 std::cout、std::cin、std::endl 等功能来读写终端。
 3.下面的语句是做什么用的？
 using namespace std;
它把 std 命名空间里的名字（比如 cout、cin）带到当前代码里，这样你可以直接写 cout 而不用写 std::cout。优点是写起来短；缺点是可能引起名字冲突。更安全的做法是写 std::cout 或只引入需要的名字（如 using std::cout）。
4.cout                                                