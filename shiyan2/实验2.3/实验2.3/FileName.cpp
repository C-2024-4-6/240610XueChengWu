#include <iostream>

int main() {
    double a, b, c;
    std::cout << "请输入第一条边的长度: ";
    std::cin >> a;
    std::cout << "请输入第二条边的长度: ";
    std::cin >> b;
    std::cout << "请输入第三条边的长度: ";
    std::cin >> c;
    // 首先判断这三条边能否构成三角形
    // 三角形任意两边之和大于第三边
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // 计算周长
        double perimeter = a + b + c;
        std::cout << "三角形的周长为: " << perimeter << std::endl;
        // 判断是否为等腰三角形
        if ((a == b) || (a == c) || (b == c)) {
            std::cout << "该三角形是等腰三角形" << std::endl;
        }
        else {
            std::cout << "该三角形不是等腰三角形" << std::endl;
        }
    }
    else {
        std::cout << "这三条边不能构成三角形" << std::endl;
    }
    return 0;
}