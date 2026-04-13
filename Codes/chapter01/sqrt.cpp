//sqrt.cpp --using the sqrt() function
#include <iostream>
#include <cmath> //包含cmath头文件以使用sqrt()函数
int main()
{
    using namespace std;
    double area;
    cout<<"Enter the floor area, in square feet, of your home:";//提示用户输入房屋的面积（以平方英尺为单位）
    cin>>area;//    从用户输入中读取房屋的面积，并将其存储在变量area中
    double side;
    side=sqrt(area);//计算房屋的边长，即面积的平方根，并将结果存储在变量side中
    cout<<"That's the equivalent of a square " << side <<" feet to the side."<<endl;//输出房屋的边长，并换行
    cout << "How fascinating!"<<endl;//输出一条消息，表示对计算结果的兴趣，并换行
  double answer =pow(side,3);//计算side的平方，即side的二次幂，并将结果存储在变量answer中
    cout<<"side as"<<side<<"to the side pow 3  as "<<answer<<endl; 
    int number= rand(); //生成一个随机整数，并将其存储在变量number中
    cout<< "here is a random number as : "<<number<<endl; //输出生成的随机数，并换行
    std::cin.get();//等待用户按下回车键，以便在程序结束前查看输出结果
     std::cin.get();
    return 0;

} 
