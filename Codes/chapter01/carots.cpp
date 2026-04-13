//carots.cpp -- food processomg program
//uses and displays a variable
#include<iostream>
int main()
{
    using namespace std;
    int carrots; //这条语句提供了两项信息: 需要的内存以及该内存单元的名字。内存单元的名字是carrots，
                 //内存单元的类型是int，表示它可以存储整数值。 在C++中int表示整数。编译器负责分配和标记内存的细节。
                 //C++可以处理多种类型的数据。而int是最基本的数据类型。他表示整数-没有小数部分的数字。
                 //C++的int类型可以为正，也可以为负，但是大小范围取决于实现，通常是-32768到32767或者-2147483648到2147483647。
                 //第二项任务是给存储单元指定名称，这个名字是程序员用来引用该内存单元的标识符。通过这个名字，程序员可以访问和操作存储在该内存单元中的数据。
                 //在C++中，所有变量都必须生命。如果省略了carrots.cpp中的声明，则当程序试图使用carrots时，编译器将指出错误。
                 //原因时因为如果错误的拼写了变量名，将在不之情的情况下创建一个新的变量。

    carrots=25;
    cout<<"I have ";
    cout<<carrots; //输出变量carrots的值
    cout<<" carrots.";
    cout <<endl;
    carrots=carrots-1;
    cout<<"Crunch,crunch. Now I have "<<carrots<<"carrots."<<endl;
    std::cin.get();
    return 0;
} 