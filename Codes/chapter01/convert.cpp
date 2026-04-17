//convert.cpp --convets stone to pounds

#include <iostream>
 using namespace std;
int stonetolb(int);
void printTest();
int prune(void);
void getCurrentSystemSize();
int main()
{
prune();
 int stone;
 cout<< "Enter the wight in stone: ";
cin >> stone;
int pounds=stonetolb(stone);
cout<<stone<<" stone = ";
cout<<pounds <<" pounds." <<endl;
int aunt =stonetolb(20);
int aunts=stonetolb(10);
cout <<"Ferdie wrighs "<<stonetolb(16)<<" pounds."<<endl;
printTest();
cin.get();
cin.get();
return 0;
}
int stonetolb(int sts)
{
    cout<<sts<<" stone is "<<14*sts<<" pounds."<<endl;
  //  return 14*sts;
  int pounds=14*sts;
  return pounds;
}


int prune(void)
{
  int age=10;
 int agesize= sizeof(age);
std::cout<<"agesize count="<<agesize<<endl;
return 0;
}
//4
void printTest()
{
  cout<<"Hello, world"<<endl;
  //5
  int cheeses;
  //6
  cheeses=100;
  std::cout<<"enter new  Cheeses change current as "<< cheeses <<" new cheeses "<<endl;
  //7
  std::cin>>cheeses;
std::cout <<"current new cheeses "<<cheeses<<endl;
//8
std::cout<<"We have "<<cheeses<<" varieties of cheese,";

}
/*
//9 
int froop(double t); //函数声明了一个froop的函数，接受一个double的参数，返回一个int类型的结果
void rattle(int n);//声明了一个rattle的函数，接受一个int类型的参数，没有返回值
int prune(void); //声明了一个prune的函数，不接受任何参数，返回一个int类型的结果

//10
定义函数时，再什么情况下不必使用关键字return?
当返回参数为空时，可以不写return。
//11
3种修复的方法
std::cout  函数内的using namespace std; 函数外的using namespace std;  
*/

