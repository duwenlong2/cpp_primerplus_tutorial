//strtype4.cpp --line input 
#include <iostream>
#include <string>
#include<cstring>
int main()
{
    using namespace std;
    char charr[20];
    string str;

    cout <<"Length of string in charr before input: "
    <<strlen(charr)<<endl;
    cout <<"Length of string in str before input: "
    <<str.size()<<endl;
    cout <<"Enter a line of text:\n";
    cin.getline(charr,20); //indicate maximum length
cout <<"You entered: "<<charr<<endl;
cout <<"Enter another line of text:\n";
getline(cin,str);
cout<<"You entered: "<<str<<endl;

cout <<"Length of string in charr after input: "
<<strlen(charr)<<endl;
cout<<"Length of string in str after input: "<<str.size()<<endl;



wchar_t title[] =L"Chaief Astrogator";
char16_t name[]=u"Felonia Ripova";
char32_t car[]=U"Humber Super Snipe";
//原始字符串 
cout<<R"(Jim "King" Tutt uses "\n" instead of endl.)" <<'\n'; //\n不被当作换行符
//使用+*(和)+*来界定原始字符串，可以在字符串中使用")而不被当作字符串结束符
cout<<R"+*("(Who wouldn't?)", she whispered.)+*" <<endl;

return 0;

}