/*1��������Ȼ��m��n��
��1�������ǵ����Լ������������������
Ҫ�����롢������������н��У���Լ���ɺ���ʵ�֡�
��2���ں����������Լ������С��������*/
#include <iostream>
using namespace std;

int gcd(int m, int n);
int lcm(int m, int n);

int main()
{
    int m, n;
    cout << "������������Ȼ����" << endl;
    cin >> m >> n;
    cout << "���Լ���ǣ�" << gcd(m, n) << endl;
    cout << "��С�������ǣ�" << lcm(m, n) << endl;
    return 0;
}

int gcd(int m, int n)
{
    while (n != 0)
    {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}

int lcm(int m, int n)
{
    return m * n / gcd(m, n);
}