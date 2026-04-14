/*
2.7 编程题



*/
#include <iostream>
#include <clocale>
#ifdef _WIN32
#include <windows.h>
#endif

void initConsoleUtf8();
void showNameandAddress();
void convertLongToCode();
void printMice();
void printRun();
void convertAgetoMonths();
void convertCelsiusToFahrenheit();
void convertLightYeartoAU();
void displayTime();
int main()
{
    initConsoleUtf8();
    std::cout<<"1.编写一个C++程序，显示您的姓名和地址"<<std::endl;
showNameandAddress();
std::cout<<"2.编写一个C++程序，要求用户输入一个以long为单位的距离，然后将它转换为码(一long等于220码)"<<std::endl;
convertLongToCode();
std::cout<<"3.编写一个C++程序，它使用3个用户定义的函数(包括main()),并生成下面的输出:"<<std::endl;
printMice();
printMice();

printRun();
printRun();
std::cout<<"4. 编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月。如下所示，Enter your age :29"<<std::endl;
convertAgetoMonths();
std::cout<<"5.编写一个程序，其中的main()调用一个用户定义的函数(以摄氏温度值为参数，并返回相应的华氏温度值)。"<<std::endl;
convertCelsiusToFahrenheit();
std::cout<<"6.编写一个程序，其main()调用一个用户定义的函数(以光年值为参数，并返回对应天文单位的值)。"<<std::endl;
convertLightYeartoAU();
std::cout<<"7.编写一个程序，要求用户输入小时数和分钟数。再main()函数中,将这两个值传递给一个void函数,后者以下面这样的格式显示这两个值："<<std::endl;
displayTime();
std::cin.get();
std::cin.get();
return 0;
}

void initConsoleUtf8()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    std::setlocale(LC_ALL, ".UTF-8");
}

//1.编写一个C++ 程序，它显示您的姓名和地址。
void showNameandAddress()
{
    std::cout<<"My name is duwenlong ,and I live in Beijing."<<std::endl;
}
//2.编写一个C++程序，它要求用户输入一个以long为单位的距离，然后将它转换为码(一long等于220码)。

void convertLongToCode()
{
    std::cout<<"Enter a distance in Lang"<<std::endl;
    long number;
 std::cin>> number;
 long code=number*220;
 std::cout<<number <<" * 220 = "<<code<<" . "<<std::endl;
}

void printMice()
{
    std::cout<<"Three blind mice"<<std::endl;
}
void printRun()
{
    std::cout<<"see how they run "<<std::endl;
}
/*
3.编写一个C++程序，它使用3个用户定义的函数(包括main()),并生成下面的输出:
Three blind mice 
Three blind mice
see how they run
see how they run
其中一个函数要调用2次，该函数生成前两行，另一个函数也被调用2次，并生成其余的输出。
*/
/*
4. 编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月。如下所示，Enter your age :29
*/
void convertAgetoMonths()
{
std::cout<<"Enter your age : "<<std::endl;
int age ;
std::cin>>age;
int months=age*12;
std::cout<<"Your age in months is "<<months <<std::endl;
}
/*
5.编写一个程序，其中的main()调用一个用户定义的函数(以摄氏温度值为参数，并返回相应的华氏温度值)。
该程序按下面的格式要求用户输入摄氏度值，并显示结果：
Plaease enter a Celsius value :20
20 degrees Celsius is 68 degrees Fahrenheit.
华氏温度=1.8*摄氏温度+32
*/
void convertCelsiusToFahrenheit()
{
    std::cout<<"Plaease enter a Celsius value :"<<std::endl;
    double celsius;
    std::cin>>celsius;
    double fahrenheit=1.8*celsius+32;
    std::cout<<celsius<<" degrees Celesius is "<<fahrenheit<<" degrees Fahrenheit."<<std::endl;
}

/*
6.编写一个程序，其main()调用一个用户定义的函数(以光年值为参数，并返回对应天文单位的值)。该程序按下面的格式要求用户输入光年值，并显示结果：
Enter the number of light years:4.2
4.2 light years = 265608 astronomical units.
天文单位时从地球到太阳的平均距离（约150000000公里）。1光年约等于63240天文单位。光年是光周一年的距离（约10万亿公里或6万亿英里）
除太阳外，最近的恒星大约离地球4.2光年。请使用double类型(参见程序清单2.4)转换公式为:
1光年=63240天文单位
*/

void convertLightYeartoAU()
{
    std::cout<<"Enter the number of light years: ";
    double lightYears;
    std::cin>>lightYears;
    double astronomicalUnits=lightYears*63240;
    std::cout<<lightYears<<" light years = "<<astronomicalUnits<<" astronomical units."<<std::endl;
}
/*
7.编写一个程序，要求用户输入小时数和分钟数。再main()函数中,将这两个值传递给一个void函数,
后者以下面这样的格式显示这两个值：
Enter the number of hours: 9
Enter the number of minutes: 28
Time: 9:28
*/

void displayTime()
{
    std::cout<<"Enter the number of hours: ";
    int hours;
    std::cin>>hours;
    std::cout<<"Enter the number of minutes: ";
    int minutes;
    std::cin>>minutes;
    std::cout<<"Time: "<<hours<<":"<<minutes<<std::endl;
}
