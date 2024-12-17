/*(2)编写一个函数将以字符串形式表示的一个16进制数转换为10进制数，并在主函数中测试。
函数原型 int parseHex(const char *const hexString);
如：调用函数 parseHex(“A5”);返回165*/
#include <iostream>
#include <string>
using namespace std;

int parseHex(const char *const hexString)
{
    int i = 0;
    int sum = 0;
    while (hexString[i] != '\0')
    {
        if (hexString[i] >= '0' && hexString[i] <= '9')
        {
            sum = sum * 16 + hexString[i] - '0';
        }
        else if (hexString[i] >= 'A' && hexString[i] <= 'F')
        {
            sum = sum * 16 + hexString[i] - 'A' + 10;
        }
        else if (hexString[i] >= 'a' && hexString[i] <= 'f')
        {
            sum = sum * 16 + hexString[i] - 'a' + 10;
        }
        i++;
    }
    return sum;
}
int main()
{
    string hexString = "A5";
    int num = parseHex(hexString.c_str()); // 使用 c_str() 将 string 转换为 const char*
    cout << "该16进制数对应的10进制数为：" << num << endl;
    return 0;
}