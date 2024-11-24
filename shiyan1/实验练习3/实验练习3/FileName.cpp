/*3.通过下面程序验证你所使用系统上运行的C++编译器中每个基本数据类型的长度。*/
#include<iostream>
using namespace std;
int main()
{
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "short length:" << sizeof(short) << endl;
	cout << "long length:" << sizeof(long) << endl;
	cout << "long long length:" << sizeof(long long) << endl;
	cout << "float length:" << sizeof(float) << endl;
	cout << "bool length:" << sizeof(bool) << endl;
	cout << "double length:" << sizeof(double) << endl;
	return 0;
}
