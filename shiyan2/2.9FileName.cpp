#include<iostream>
using namespace std;
int main()
{
	float money = 0.8;
	int day = 1;
	int sum = 0, num;
	float ave;
	for (num = 2; num <= 50; num *= 2)
	{
		day++;
	}
	sum += num;
	ave = sum * money / day;
	cout << day << endl;
	cout << sum << endl;
	cout << ave << endl;
	return 0;
}