/*5�������Ӵ���
��д���º���������C�ַ���s1�Ƿ���C�ַ���s2���Ӵ������ƥ�䣬����s1��s2�е��±꣬���򷵻بC1��
int indexOf(const char s1[], const char s2[])
��д���Գ��򣬶�������C�ַ���������C�ַ���s1�Ƿ���C�ַ���s2���Ӵ��������ǳ��������������
Enter the first string: welcome
Enter the second string: We welcome you!
indexOf(��welcome��, ��We welcome you!��) is 3������s1��s2�е���ʼλ�ã�

Enter the first string: welcome
Enter the second string: We invite you!
indexOf(��welcome��, ��We invite you!��) is �C1
*/
#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
    int i, j, k;
    for (i = 0; s2[i] != '\0'; i++) // ��\0�����ַ����Ľ���������ʾ�ַ�������
    {
        // �ӵ�ǰ�ַ���ʼ������Ƚ�s1��s2���ַ�
        for (j = i, k = 0; s2[j] != '\0' && s1[k] != '\0'; j++, k++)
        {
            if (s2[j] != s1[k])
                break; // ����ַ���ƥ�䣬�����ڲ�ѭ��
        }
        // ���s1�������ַ���ƥ�䣬�򷵻�s1��s2�е���ʼλ��
        if (s1[k] == '\0')
            return i;
    }
    // ���û���ҵ�ƥ����Ӵ�������-1
    return -1;
}
int main()
{
    char s1[100], s2[100];
    cout << "Enter the first string: ";
    cin.getline(s1, 100);//cin.getline�ſ��Զ���ո�������cin�޷��ɹ�
    cout << "Enter the second string: ";
    cin.getline(s2, 100);
    int a = indexOf(s1, s2);
    if (a == -1)
        cout << "indexOf(" << s1 << ", " << s2 << ") is -1" << endl;
    else
        cout << "indexOf(" << s1 << ", " << s2 << ") is " << a << endl;
    return 0;
} 