/*1、输入一个字符，如果为小写，转换为大写输出，否则，输出其后继字符的ASCII码值。*/
#include <iostream>
using namespace std;
int main() {
    char ch;  // 定义用于存储输入字符的变量
    cout << "请输入一个字符: ";
    cin >> ch;  // 从键盘获取字符
    if (ch >= 'a' && ch <= 'z') {  // 1. 判断是否为小写
        ch -= 32;  // 将小写转换为大写
        cout << ch << endl;
    }
    else {  // 2. 不是小写
        int asciiCode = (int)ch + 1;  // 计算后继字符的 ASCII 码
        cout << asciiCode << endl;
    }
    return 0;
}