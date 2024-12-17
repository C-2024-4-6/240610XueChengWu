/*(2)��дһ�����������ַ�����ʽ��ʾ��һ��16������ת��Ϊ10�������������������в��ԡ�
����ԭ�� int parseHex(const char *const hexString);
�磺���ú��� parseHex(��A5��);����165*/
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
    int num = parseHex(hexString.c_str()); // ʹ�� c_str() �� string ת��Ϊ const char*
    cout << "��16��������Ӧ��10������Ϊ��" << num << endl;
    return 0;
}