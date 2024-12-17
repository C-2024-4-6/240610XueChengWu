#include<iostream>
using namespace std;
int main()
{
	for (int a = 1; a <= 5; a++)
	{
		for (int b = 0; b < a; b++)
		{
			cout << '*';
		}
		cout << endl;
	}
	return 0;
}