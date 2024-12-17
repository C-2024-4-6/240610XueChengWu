#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double f; 
    cout << "请输入华氏度: ";
    cin >> f; 
    double c = (f - 32) * 5.0 / 9.0; 
    cout << "转换后的摄氏度为: " << fixed << setprecision(2) << c << endl;

    return 0;
}