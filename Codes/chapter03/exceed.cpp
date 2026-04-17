//exceed.cpp --exceeding some integer limits
#include <iostream>
#define ZERO 0 //makes ZERO symbol for 0 value 
#include <climits>
int main()
{
    short sam=SHRT_MAX; //max value for short
    unsigned short sue=sam;//okay if variable sam already defined
    std::cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue<<" dollars deposited."<<std::endl;
std::cout<<"Add $1 to each account."<<std::endl;
sam=sam+1;
sue=sue+1;
std::cout<<"Now Sam has "<<sam<<" dollars and Sue has "<<sue<<" dollars deposited."<<std::endl;

sam=ZERO;
sue=ZERO;
std::cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue <<" dollars deposited. "<<std::endl;

std::cout<<"Take $1 from each account."<<std::endl;
sam=sam-1;
sue=sue-1;
std::cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue<<" dollars deposited."<<std::endl<<"Lucky Sue!"<<std::endl;

std::cin.get();
std::cin.get();

return 0;
}

//short sam=SHRT_MAX; //max value for short +1之前是32767 最大值，范围是-32768~32767   
//+1之后就溢出了。变成了负的-32768
//unsigned short sue=sam;//unsigned short的范围是0~65535，sam的值是32767，所以sue也是32767，
//+1之后就变成了32768，超过了short的最大值，但是unsigned short的范围足够大，所以没有溢出。