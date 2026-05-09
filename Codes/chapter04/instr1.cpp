//instr1.cpp --reading more than one string 
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize=20;
    char name[ArSize];
    char dessert[ArSize];

    //cin使用空白来确定字符串的结束位置，cin在获取字符串数组输入时只读取一个单词。
    //读取该单词后，cin将该字符串放到数组中。并自动在结尾添加空字符。

    cout <<"Enter your name:\n";
    cin>>name;
    cout <<"Enter your favorite dessert:\n";
    cin >>dessert;
    cout <<"I have some delicious "<<dessert;
    cout <<" for you, " <<name <<".\n";


    //cin.get() getline可以读取一行数据。不会出现单词被截断的情况
    
    return 0;
}