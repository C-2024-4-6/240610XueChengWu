/*2����������
�������������㷨��дһ�������������������㷨�������˶�������д���ÿ�˴����У�������Ԫ�ؽ��бȽϡ���Ϊ�����򽻻������򣬱���ԭ˳��
�˼�������Ϊ��������bubble sort�����³�����sinking sort������Ϊ��С��ֵ�𽥵ء�ð�ݡ����ϲ������ϴ�ֵ���³����ײ���
�㷨���������£�
bool changed = true;
do
{
changed = false;
for (int j = 0; j < listSize �C 1; j++)
	if (list[j] > list[j+1])
	{
	  swap list[j] with list[j+1];
	  changed = true;
	}
} while (changed);
�����ԣ�ѭ���������б��Ϊ��������֤��doѭ�����ִ��listSize �C 1�Ρ�
��д���Գ��򣬶���һ������10��˫�������ֵ����飬���ú�������ʾ���к�����֡�*/
#include<iostream>
using namespace std;
int main()
{
    const int SIZE = 10;
    double list[SIZE];
    for(int i = 0; i < SIZE; i++)
    {
        cin >> list[i];
    }
    bool changed = true;
    do
    {
        changed = false;
        for(int j = 0; j < SIZE - 1; j++)
        {
            if(list[j] > list[j+1])
            {
                double temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
                changed = true;
            }
        }
    }while(changed);
    for(int i = 0; i < SIZE; i++)
        cout << list[i] << " ";
    return 0;
}