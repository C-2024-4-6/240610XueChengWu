#include <iostream>
double calculate(double num1, double num2, char op) {
    switch (op) {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        if (num2 != 0) {
            return num1 / num2;
        }
        else {
            std::cout << "除数不能为 0" << std::endl;
            return -1;
        }
    default:
        std::cout << "非法运算符" << std::endl;
        return -1;
    }
}
int main() {
    double num1, num2;
    char op;
    std::cout << "请输入第一个数: ";
    std::cin >> num1;
    std::cout << "请输入运算符 (+ - * /): ";
    std::cin >> op;
    std::cout << "请输入第二个数: ";
    std::cin >> num2;
    double result = calculate(num1, num2, op);
    if (result != -1) {
        std::cout << "结果为: " << result << std::endl;
    }
    return 0;
}