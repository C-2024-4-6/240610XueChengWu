/*(3)主程序中建立一动态数组（使用new），数组元素及元素个数由键盘输入，动态调试观察指针及指针指向的内容；
设计一个函数对数组由小到大排序；主程序中用指针方式输出数组元素；最后释放数组内存（delete）。*/
#include<iostream>
using namespace std;
int main()
{
    int n,i;
	int *p;
    cout<<"请输入数组元素个数：";
	cin>>n;
	p=new int[n];
	cout<<"请输入数组元素：";
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
	}
	cout<<"数组元素为：";
	for(i=0;i<n;i++)
	{
		cout<<*(p+i)<<" ";
	}
	for(i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(*(p+i)>*(p+j))
			{
				int temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
    cout<<"排序后数组元素为：";
	for(i=0;i<n;i++)
	{
		cout<<*(p+i)<<" ";
	}
	delete []p;
	return 0;
}