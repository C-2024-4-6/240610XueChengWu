/*(1)编写函数检查字符串s1是否为字符串s2的子串，
若是，返回第一次匹配的下标，否则返回-1。
在主程序中输入字符串s1与s2，调用函数实现。
函数原型：int indexof(const char *s1, const char *s2);*/
#include <iostream>
using namespace std;
// 检查字符串s1是否为字符串s2的子串
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
    cout << "请输入s1：";
    cin.getline(s1, 20);
    cout << "请输入s2：";
    cin.getline(s2, 20);
    int index = indexof(s1, s2);
    if (index == -1)
        cout << "s1不是s2的子串" << endl;
    else
        cout << "s1是s2的子串，第一次匹配的下标为：" << index << endl;
    return 0;
}