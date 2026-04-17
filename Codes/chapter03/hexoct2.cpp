//hexoct2.cpp -- shows hex and octal literals
#include <iostream>
using namespace std;
int main()
{
 int chest =42;
 int waist =42;
 int inseam =42;
    cout<<"Monsieur cuts a striking figure!"<<endl;
    cout<<"chest = "<<chest <<"{decimal for 42}\n";
    //它是把 cout 的整数输出进制切换为 16进制
    cout<<hex; //manipulator for changing number base
     cout<<"waist = "<<waist<<" (0x42 in hex)\n";   
    //可以8进制
     cout <<oct;//manipulator for changing number base;
    cout<<"inseam = "<<inseam <<"(octal for 42)\n";
    //切换回10进制
    cout<<dec;//manipulator for changing number base 
    cout<<"chest = "<<chest<<" (decimal for 42)\n";
cin.get();
cin.get();
return 0;
}