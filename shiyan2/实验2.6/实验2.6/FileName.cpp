#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "请输入两个正整数：";
    cin >> a >> b;
    int tempA = a;
    int tempB = b;
    // 求最大公约数
    while (tempB != 0) {
        int temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }
    int gcdValue = tempA;
    // 求最小公倍数
    int lcmValue = a * b / gcdValue;
    cout << "最大公约数是：" << gcdValue << endl;
    cout << "最小公倍数是：" << lcmValue << endl;
    return 0;
}