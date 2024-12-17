/*5、检验子串：
编写如下函数，检验C字符串s1是否是C字符串s2的子串。如果匹配，返回s1在s2中的下标，否则返回–1。
int indexOf(const char s1[], const char s2[])
编写测试程序，读入两个C字符串，检验C字符串s1是否是C字符串s2的子串。下面是程序的运行样例：
Enter the first string: welcome
Enter the second string: We welcome you!
indexOf(“welcome”, “We welcome you!”) is 3（返回s1在s2中的起始位置）

Enter the first string: welcome
Enter the second string: We invite you!
indexOf(“welcome”, “We invite you!”) is –1
*/
#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
    int i, j, k;
    for (i = 0; s2[i] != '\0'; i++) // ‘\0’是字符串的结束符，表示字符串结束
    {
        // 从当前字符开始，逐个比较s1和s2的字符
        for (j = i, k = 0; s2[j] != '\0' && s1[k] != '\0'; j++, k++)
        {
            if (s2[j] != s1[k])
                break; // 如果字符不匹配，跳出内层循环
        }
        // 如果s1的所有字符都匹配，则返回s1在s2中的起始位置
        if (s1[k] == '\0')
            return i;
    }
    // 如果没有找到匹配的子串，返回-1
    return -1;
}
int main()
{
    char s1[100], s2[100];
    cout << "Enter the first string: ";
    cin.getline(s1, 100);//cin.getline才可以读入空格，我试了cin无法成功
    cout << "Enter the second string: ";
    cin.getline(s2, 100);
    int a = indexOf(s1, s2);
    if (a == -1)
        cout << "indexOf(" << s1 << ", " << s2 << ") is -1" << endl;
    else
        cout << "indexOf(" << s1 << ", " << s2 << ") is " << a << endl;
    return 0;
} 