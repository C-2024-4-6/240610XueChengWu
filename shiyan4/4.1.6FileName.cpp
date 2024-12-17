/*6���ַ�����ÿ����ĸ���ֵĴ�����
��ʹ�����º���ͷ��д�����������ַ�����ÿ����ĸ���ֵĴ�����
void count(const char s[], int counts[])
counts��һ����26��Ԫ�ص��������顣const[0]��const[1]������const[25]�ֱ��¼a��b������z���ֵĴ�����
��ĸ���ִ�Сд��������ĸA����ĸa��������a��
��д���Գ��򣬶����ַ���������count��������ʾ����Ĵ����������ǳ����һ������������
Enter a string: Welcome to New York!
c: 1 times
e: 3 times
k: 1 times
l: 1 times
m: 1 times
n: 1 times
o: 3 times
r: 1 times
t: 1 times
w: 2 times
y: 1 times*/
#include <iostream>
using namespace std;
void count(const char s[], int counts[])
{
    int i, j;
    for (i = 0; i < 26; i++)
        counts[i] = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            counts[s[i] - 'a']++;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            counts[s[i] - 'A']++;
    }
}
int main()
{
    char s[100];
    cout << "Enter a string: ";
    cin.getline(s, 100);//ͬ��һ�⣬cin>>���޷��ɹ���
    int counts[26];
    count(s, counts);
    for (int i = 0; i < 26; i++)
    {
        if (counts[i] != 0)
            cout << (char)('a' + i) << ": " << counts[i] << " times" << endl;
    }
    return 0;
}