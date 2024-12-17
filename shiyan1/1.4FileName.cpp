/*4.观察下面程序的执行结果。
#include <iostream>
#include <iomanip>
using namespace std;
int main()
unsigned int testUnint = 65534;//oxfffe
cout << "output in unsigned int 1 type:"" << testUnint<< end;//<<oct;
cout << "output in char type:!" << static_ cast<char>(testUnint) << endl;
cout << "output in short type:" << static_ cast<short>(testUnint) << endl;//为什么结果为-2?:
cout << "output in int type:" << static_ cast<int>. (testUnint) << endl;
cout << "output in double type:" << static cast<double>(testUnint) << endl;
cout << "output in double type:" << setprecision(4) << static_ cast<double>(testUnint) << endl;
cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
system("pause");
return 0;
自己编程测试一下将testUnint按8进制输出 << oct; je_将一个实数转换成int, 观察结果。*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int type:" << testUnint << endl;//<<oct;
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	cout << "output in oct unsigned int type:" << oct << testUnint << endl; //8进制输出
	system("pause");
	return 0;
}