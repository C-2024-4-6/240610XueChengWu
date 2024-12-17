/*5、猴子吃桃：猴子第一天摘若干桃子，当即吃了一半，还不过瘾，又吃了一个。
第二天又将剩下的桃子吃掉一半，又多吃一个，以后每天如此，到第10天，发现只剩最后一个桃子，
问，第一天猴子共摘多少桃子（用递归实现）。*/
#include <iostream>
using namespace std;

int f(int n)
{
    if (n == 1) // 递归终止条件
        return 1;
    return 2 * (f(n - 1) + 1);
}

int main()
{
    int n = 10;
    cout << f(n) << endl;
    return 0;
}