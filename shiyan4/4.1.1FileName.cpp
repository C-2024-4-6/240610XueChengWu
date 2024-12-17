/*1、打印不同的数：
编写一个程序，读入10个数，输出其中不同的数（即如果一个数出现多次，只打印一次）。
提示：读入的数如果是一个新的值，则将其存入一个数组。否则，将其丢弃。输入完毕后，数组中保存的就是不同的数。
下面是一个运行样例：
Enter ten numbers: 1 2 3 2 1 6 3 4 5 2
The distinct numbers are: 1 2 3 6 4 5*/
#include <iostream>
using namespace std;
int main()
{
	int s1[10], s2[10];
	cout << "Enter ten numbers: ";
	for (int i = 0; i < 10; i++)
		cin >> s1[i];
	s2[0] = s1[0];
	int k = 1;
	for (int i = 1; i < 10; i++)
	{
		bool distinct = true;
		for (int j =0; j < i; j++)
		{
			if (s1[i] == s2[j])
			{
                distinct = false;
                break;
			}
		}
		if (distinct)
		{
			s2[k] = s1[i];
			k++;
		}
	}
	cout<<"The distinct numbers are: ";
	for (int i = 0; i < k; i++)
	{
		cout << s2[i] << ' ';
	}
    return 0;
}