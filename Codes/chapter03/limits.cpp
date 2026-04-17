
//limits.cpp some integer limits 
#include <iostream>
#include <limits>
#include <cstdint>
#include <climits>
int main()
{
    std::cout <<"-----------------------------------"<<std::endl;
std::cout << "sizeof(char)    : " << sizeof(char) << std::endl;
std::cout << "sizeof(short)   : " << sizeof(short) << std::endl;
std::cout << "sizeof(int)     : " << sizeof(int) << std::endl;
std::cout << "sizeof(long)    : " << sizeof(long) << std::endl;
std::cout << "sizeof(long long): " << sizeof(long long) << std::endl;
std::cout << "sizeof(float)   : " << sizeof(float) << std::endl;
std::cout << "sizeof(double)  : " << sizeof(double) << std::endl;
    std::cout <<"-----------------------------------"<<std::endl;
     char n_char=CHAR_MAX;
    int n_int=INT_MAX;
    short n_short=SHRT_MAX;
    long n_long=LONG_MAX;
    long long n_llong=LLONG_MAX;
   
    //sizeof  operator yields size of type or of variable 
   std::cout<<" int is "<<sizeof(int)<<" bytes."<<std::endl;
   std::cout<<"short is "<<sizeof(n_short)<<" bytes."<<std::endl;
std::cout<<"long is "<<sizeof(n_long)<<" bytes."<<std::endl;
std::cout<<"long long is "<<sizeof(n_llong)<<" bytes."<<std::endl;
std::cout<<std::endl;
std::cout<<"Maximum values:"<<std::endl;
std::cout<<"char: "<<n_char<<std::endl;
std::cout<<"int: "<<n_int<<std::endl;
std::cout <<"short: "<<n_short<<std::endl;
std::cout<<"long: "<<n_long<<std::endl;
std::cout<<"long long: "<<n_llong<<std::endl<<std::endl;
std::cout <<"Minimum int value = "<<INT_MIN<<std::endl;
std::cout <<"Bits per byte = "<<CHAR_BIT<<std::endl;
    std::cout <<"-----------------------------------"<<std::endl;
// Example: show bits, min and max for common integer types
std::cout << "\n-- Detailed integer ranges (printed as integers) --" << std::endl;

auto print_range = [](const char* name, auto minv, auto maxv){
    std::cout << name << " : min = " << +minv << ", max = " << +maxv << std::endl;
};

// char may be signed or unsigned depending on implementation
std::cout << "char is signed? " << (std::numeric_limits<char>::is_signed ? "yes" : "no") << std::endl;
print_range("char (as int)", static_cast<int>(std::numeric_limits<char>::min()), static_cast<int>(std::numeric_limits<char>::max()));
print_range("signed char", static_cast<int>(std::numeric_limits<signed char>::min()), static_cast<int>(std::numeric_limits<signed char>::max()));
print_range("unsigned char", 0, static_cast<int>(std::numeric_limits<unsigned char>::max()));

print_range("short", SHRT_MIN, SHRT_MAX);
print_range("int", INT_MIN, INT_MAX);
print_range("long", LONG_MIN, LONG_MAX);
print_range("long long", LLONG_MIN, LLONG_MAX);

std::cout << "(bits per byte = " << CHAR_BIT << ")" << std::endl;
std::cout << "-----------------------------------" << std::endl;

int n_int8=INT_MAX;
int uncles=5;
int aunts =uncles;
int chairs= aunts+uncles+4;

int wrens(431);
int emus{7}; //{}会阻止隐式类型转换，确保只能用7来初始化emus，而不能用其他类型的值
             //比如说，如果我们尝试用一个浮点数来初始化emus，比如 emus{7.5}，编译器会报错，因为7.5不能隐式转换为整数类型。
             //这种初始化方式有助于避免意外的类型转换错误，提高代码的安全性和可读性。       
             //但是使用int emus=7.5;是允许的，因为它会隐式转换为整数7，虽然这可能不是我们想要的结果。
int emus2=7.5; //允许隐式转换，emus2会被赋值为整数7，虽然这可能不是我们想要的结果
        
int rovertMin=INT32_MIN;
int rovertMax=INT32_MAX;
std::cout<<"rovert is "<<rovertMin<<" and has "<<sizeof(rovertMin)<<" bytes."<<std::endl;
std::cout<<"rovert is "<<rovertMax<<" and has "<<sizeof(rovertMax)<<" bytes."<<std::endl;
unsigned int rovertMax2=UINT32_MAX;
std::cout<<"rovertMax2 is "<<rovertMax2<<" and has "<<sizeof(rovertMax2)<<" bytes."<<std::endl;
uint32_t rovert2; //uint16_t是一个无符号的16位整数类型，定义在<cstdint>头文件中，确保在不同平台上具有一致的大小和行为
rovert2=UINT32_MAX; 
std::cout<<"rovert2 is "<<rovert2<<" and has "<<sizeof(rovert2)<<" bytes."<<std::endl;

std::cin.get();
std::cin.get();
return 0;
}

