/*2.   ��д�������㣺����һ���������ж�һ�������Ƿ�Ϊ������ʹ�����º���ͷ��
bool is_prime(int num), ���num��������������true�����򷵻�false��
���ú���is_prime�ҳ�ǰ200������������ÿ��10�������
2?????3??????5??????7????11????13????17????19????23????29*/
#include <iostream>
using namespace std;
bool is_prime(int num)
{
    if(num==1)
    return false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int count = 0;
    for (int i = 1; count < 200; i++)
    {
        if (is_prime(i))
        {
            cout << i << "\t";
            count++;
            if (count % 10 == 0)
               cout << endl;
        }
    }
}