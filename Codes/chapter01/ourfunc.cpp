//ourfunc.cpp -- 使用我们自己的函数
#include <iostream>
void simon(int); //函数原型，声明了一个名为simon的函数，接受一个整数参数并返回void类型（无返回值）
int main()
{
    using namespace std;
    simon(3);//调用simon函数，并传递整数3作为参数
    cout <<"Pick an integer:"; //提示用户输入一个整数
    int count;
    cin>>count;//从用户输入中读取一个整数，并将其存储在变量count中
    simon(count);//调用simon函数，并传递用户输入的整数count作为参数
    cout<<"Done!"<<endl;//输出"Done!"并换行，表示程序执行完成
    cin.get(); //等待用户按下回车键，以便在程序结束前查看输出结果
    cin.get();
    return 0;
}

void simon(int n)//定义函数simon，接受一个整数参数n，并返回void类型（无返回值）
{ 
std::cout<<"Simon says touch your toes "<<n<<" times. "<<std::endl;
}