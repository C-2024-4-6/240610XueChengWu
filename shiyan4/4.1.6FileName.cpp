/*6、字符串中每个字母出现的次数：
请使用如下函数头编写函数，数出字符串中每个字母出现的次数。
void count(const char s[], int counts[])
counts是一个有26个元素的整数数组。const[0]，const[1]，…，const[25]分别记录a，b，…，z出现的次数。
字母不分大小写，例如字母A和字母a都被看作a。
编写测试程序，读入字符串并调用count函数，显示非零的次数。下面是程序的一个运行样例：
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
    cin.getline(s, 100);//同上一题，cin>>是无法成功的
    int counts[26];
    count(s, counts);
    for (int i = 0; i < 26; i++)
    {
        if (counts[i] != 0)
            cout << (char)('a' + i) << ": " << counts[i] << " times" << endl;
    }
    return 0;
}