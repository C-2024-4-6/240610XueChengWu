/*2、分别输入 0.2, 1, 5 , 0,观察输出结果。
*/
#include <iostream>
using namespace std;
double calculate(double x) {
    if (0 < x && x < 1) {
        return 3 - 2 * x;
    }
    else if (1<= x < 5) {
        return 2 / (4 * x) + 1;
    }
    else if (5 <= x && x < 10) {
        return x * x;
    }
    else {
        cout << "输入的 x 值不在有效范围内" << endl;
        return 0;
    }
}
int main() {
    double x;
    cout << "请输入 x 的值: ";
    cin >> x;
    double y = calculate(x);
    cout << "计算结果 y 为: " << y << endl;
    return 0;
}