//morechar.cpp -- the char type and int type contrasted 
#include <iostream>

int main()
{
    using namespace std;
    char ch='M';
    int i=ch;
    cout<< "The ASCII code for "<<ch <<" is "<<i<<endl;
    cout <<"Add one to the character code:"<<endl;
    ch=ch+1;
    i=ch;
    cout<<"The ASCII code for "<<ch <<" is "<<i <<endl;

    //using the cout.put() member function to display a char cout.put(ch);
    cout<<"Displaying char ch using cout.put():";
    cout.put(ch);
    //using cout.put() to display a char constant 
    cout.put('!');

    char alarm='\a';
    cout<< alarm<<"Don't do that again!\a\n";
    cout <<"Ben \"Buggsie\" Hacker\nwas here!\n";
    cout<<endl<<"Done! Enter input :"<<endl;

    char n;
    cin>>n;
    cout<<"n is "<<n<<endl;
    int m=n;
    cout<<"m is "<<m<<endl;
    cin.get();
    cin.get();
    return 0;
}