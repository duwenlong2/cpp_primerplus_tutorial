//getinfo.cpp --input and output
#include <iostream>
#include <limits>
int main()
{

    using namespace std;
    int carrots;
    cout<<"How many carrots do you have?"<<endl; //提示用户输入胡萝卜的数量
    cin>>carrots; //从用户输入中读取胡萝卜的数量，并将其存储在变量carrots中
    cout<<"Here are two more. ";
    carrots=carrots+2; //将用户输入的胡萝卜数量加上2，表示增加了两根胡萝卜
    cout<<"Now you have "<<carrots<<" carrots."<<endl; //输出当前的胡萝卜数量，并换行 ,4条语句合并
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //清除输入缓冲区中的任何剩余输入，以防止后续输入操作受到干扰
    std::cin.get(); //等待用户按下回车键，以便在程序结束前查看输出结果
    return 0;
}

