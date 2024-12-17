#include<iostream>
using namespace std;
int main()
{
	int k = 0;//i大写，未定义k
	int i = k + 1;
	i++;
	cout << i << endl;//无法输出算数式
	i++;//i重复定义
	cout << i << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}
