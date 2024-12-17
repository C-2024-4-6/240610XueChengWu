/*2、起泡排序：
利用起泡排序算法编写一个排序函数。起泡排序算法分若干趟对数组进行处理。每趟处理中，对相邻元素进行比较。若为降序，则交换；否则，保持原顺序。
此技术被称为起泡排序（bubble sort）或下沉排序（sinking sort），因为较小的值逐渐地“冒泡”到上部，而较大值逐渐下沉到底部。
算法可描述如下：
bool changed = true;
do
{
changed = false;
for (int j = 0; j < listSize – 1; j++)
	if (list[j] > list[j+1])
	{
	  swap list[j] with list[j+1];
	  changed = true;
	}
} while (changed);
很明显，循环结束后，列表变为升序。容易证明do循环最多执行listSize – 1次。
编写测试程序，读入一个含有10个双精度数字的数组，调用函数并显示排列后的数字。*/
#include<iostream>
using namespace std;
int main()
{
    const int SIZE = 10;
    double list[SIZE];
    for(int i = 0; i < SIZE; i++)
    {
        cin >> list[i];
    }
    bool changed = true;
    do
    {
        changed = false;
        for(int j = 0; j < SIZE - 1; j++)
        {
            if(list[j] > list[j+1])
            {
                double temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
                changed = true;
            }
        }
    }while(changed);
    for(int i = 0; i < SIZE; i++)
        cout << list[i] << " ";
    return 0;
}