/*(1)��д��������ַ���s1�Ƿ�Ϊ�ַ���s2���Ӵ���
���ǣ����ص�һ��ƥ����±꣬���򷵻�-1��
���������������ַ���s1��s2�����ú���ʵ�֡�
����ԭ�ͣ�int indexof(const char *s1, const char *s2);*/
#include <iostream>
using namespace std;
// ����ַ���s1�Ƿ�Ϊ�ַ���s2���Ӵ�
int indexof(const char *s1, const char *s2)
{
    int i = 0, j = 0;
    while (s2[i] != '\0')
    {
        j = 0;
        while (s2[i + j] == s1[j])
        {
            j++;
            if (s1[j] == '\0')
                return i;
        }
        i++;
    }
    return -1;
}
int main()
{
    char s1[20], s2[20];
    cout << "������s1��";
    cin.getline(s1, 20);
    cout << "������s2��";
    cin.getline(s2, 20);
    int index = indexof(s1, s2);
    if (index == -1)
        cout << "s1����s2���Ӵ�" << endl;
    else
        cout << "s1��s2���Ӵ�����һ��ƥ����±�Ϊ��" << index << endl;
    return 0;
}