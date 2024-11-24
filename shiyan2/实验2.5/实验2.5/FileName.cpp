#include <iostream>
using namespace std;
int main() {
    int letterCount = 0;  // 用于统计英文字母的个数
    int spaceCount = 0;   // 用于统计空格的个数
    int digitCount = 0;   // 用于统计数字字符的个数
    int otherCount = 0;   // 用于统计其他字符的个数
    char c;
    while ((c = getchar()) != '\n') {  // 循环读入字符，直到遇到回车换行符
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {  // 如果是英文字母
            letterCount++;
        }
        else if (c == ' ') {  // 如果是空格
            spaceCount++;
        }
        else if (c >= '0' && c <= '9') {  // 如果是数字
            digitCount++;
        }
        else {  // 其他情况
            otherCount++;
        }
    }
    // 输出统计结果
    cout << "英文字母的个数: " << letterCount << endl;
    cout << "空格的个数: " << spaceCount << endl;
    cout << "数字字符的个数: " << digitCount << endl;
    cout << "其他字符的个数: " << otherCount << endl;
    return 0;
}