/*4��������Ϊmytriangle.h��ͷ�ļ���������
bool is_valid(double side1, double side2, double side3)
double_area(double side1, double side2, double side3)
��� = sqrt(s(s - side1)(s - side2)(s - side3))
����s = (side1 + side2 + side3) / 2
д���Գ��򣺶�ȡ���������߳���������Ϸ�������������������������Ϣ��
�����Գ���Ϊ��ģ�飬��main()�������ڵ�CPP�ļ���ͷ�ļ�mytriangle.hֻ�к�����������������д����һCPP�ļ�mytriangle.cpp��
#include<iostream>
using namespace std;
bool is_valid(double side1, double side2, double side3);
double double_area(double side1, double side2, double side3);
*/
#include "mytriangle.h"
bool is_valid(double side1, double side2, double side3)
{
	return side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2;
}
double double_area(double side1, double side2, double side3)
{
	double s = (side1 + side2 + side3) / 2;
	return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}