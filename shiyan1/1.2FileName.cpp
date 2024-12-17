/*2.求圆锥的体积：要求键盘输入圆锥底的半径、锥高，使用标识符常量定义圆周率。
(1)创建一个控制台项目 
(2)在文件中输入程序内容，存盘 
(3)编译、连接、运行；观察结果
*/
#include <iostream>
using namespace std;
const double PI = 3.14159;  // 定义圆周率为常量
int main() {
    double radius, height;  // 定义用于存储圆锥底面半径和高的变量
    cout << "请输入圆锥底面的半径: ";
    cin >> radius;  // 从键盘获取圆锥底面半径
    cout << "请输入圆锥的高: ";
    cin >> height;  // 从键盘获取圆锥的高
    double volume = PI * radius * radius * height / 3;  // 计算圆锥体积的公式：V = 1/3 * π * r^2 * h
    cout << "圆锥的体积是: " << volume << endl;  // 输出圆锥的体积
    return 0;
}