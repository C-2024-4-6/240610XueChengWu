/*(3)�������н���һ��̬���飨ʹ��new��������Ԫ�ؼ�Ԫ�ظ����ɼ������룬��̬���Թ۲�ָ�뼰ָ��ָ������ݣ�
���һ��������������С������������������ָ�뷽ʽ�������Ԫ�أ�����ͷ������ڴ棨delete����*/
#include<iostream>
using namespace std;
int main()
{
    int n,i;
	int *p;
    cout<<"����������Ԫ�ظ�����";
	cin>>n;
	p=new int[n];
	cout<<"����������Ԫ�أ�";
	for(i=0;i<n;i++)
	{
		cin>>*(p+i);
	}
	cout<<"����Ԫ��Ϊ��";
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
    cout<<"���������Ԫ��Ϊ��";
	for(i=0;i<n;i++)
	{
		cout<<*(p+i)<<" ";
	}
	delete []p;
	return 0;
}