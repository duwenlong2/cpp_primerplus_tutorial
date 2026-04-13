// hello.cpp -- 显示一条消息 
#include <iostream> // 引入输入输出流库，支持cout等功能

int main() // 主函数，程序入口
{
	using namespace std; // 使用标准命名空间，简化代码书写
	cout << "Come up and C++ me some time."; // 输出第一句话到屏幕
	cout << endl; // 输出一个换行符，让内容换行
	cout << "You won't regret it!" << endl; // 输出第二句话并换行
    cout <<"endl == \n";// 输出endl等价于换行符\n
	      cout <<endl;// 输出endl等价于换行符\n
		  cout <<"The Good ,the";
		  cout<<"Bad,";
		  cout<<"and the Ukulele";
		  cout<<endl;
	std::cin.get();
	return 0; // 返回0，表示程序正常结束
}
/*如果C++程序需要使用C++输入或者输出工具，需要提供这样两行代码：
#include<iostream> 
using namespace std;

其中include 是一个预处理指令，告诉编译器在编译之前要包含iostream文件的内容。
iostream是一个标准库文件，提供了输入输出功能，比如cout和cin。  

C++ 是C的超集，它在C的基础上增加了面向对象编程、泛型编程、异常处理等功能。

这里提出一个问题：为什么要将iostream文件的内容添加到程序中呢？
因为我们需要使用cout来输出信息到屏幕上，而cout就是定义在iostream库中的一个对象。
如果不包含iostream，我们就无法使用cout，程序会报错说找不到cout的定义。
因此，包含iostream是为了让我们能够使用cout来输出信息。  

那为什么我们创建的是cpp文件呢？因为cpp是C++源文件的常用扩展名，表示这是一个C++程序的源代码文件。
当我们编写C++程序时，通常会使用.cpp作为文件扩展名，以便区分于其他类型的文件，比如.h头文件、.txt文本文件等。
使用.cpp扩展名可以让编译器和开发环境更容易识别这是一个C++源文件，并且可以正确地处理和编译它。   
 
什么是名称空间，为什么要使用名称空间呢？名称空间是一种组织代码的方式，可以避免命名冲突。
在大型项目中，可能会有很多函数、变量和类，如果它们的名字相同，就会发生冲突，导致编译错误。
使用名称空间可以将这些名字放在不同的命名空间中，避免冲突。比如，std是C++标准库   
的命名空间，里面包含了cout、cin等标准库的功能。通过使用using namespace std;
我们就可以直接使用cout而不需要写成std::cout。 

using namespace std;是一种偷懒的做法，因为它会引入std命名空间中的所有名字，可能会导致命名冲突。
因此，更好的做法是只引入需要使用的名字，这样可以减少潜在的冲突风险。比如，我们可以这样写：        
using std::cout; // 可以只引入cout，而不是整个std命名空间，这样可以避免引入不必要的名字，减少潜在的冲突风险。
using std::endl; // 同样引入endl，方便使用换行功能。
using std::cin; // 如果需要使用输入功能，可以引入cin。 

编译
cd "d:\Codes\githubCode\cpp_primerplus_tutorial\Codes\chapter01"; g++ hello.cpp -o hello.exe
*/