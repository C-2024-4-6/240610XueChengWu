/*4���ϲ��������кõ����飺
��д���º������ϲ��������кõ����飬�γ�һ���µ����кõ����顣
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
ʹ��size1+size2�αȽ�ʵ�ֺ�������д���Գ�����ʾ�û������������кõ����飬����ʾ�ϲ��Ժ�����顣
������һ������������ע�⣬�������ݵĵ�һ�������������Ԫ�����������������һ���֡��ٶ������С������80��
Enter list1: 5 1 5 16 61 111
Enter list1: 4 2 4 5 6
The merged list is 1 2 4 5 5 6 16 61 111
*/
#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0, j = 0, k = 0;
	for (; i < size1 && j < size2; k++)
	{
		if (list1[i] < list2[j])
			list3[k] = list1[i++];//��ȡֵ��������
		else
			list3[k] = list2[j++];
	}
	for (; i < size1; i++)
		list3[k++] = list1[i];
	for (; j < size2; j++)
		list3[k++] = list2[j];
}
int main()
{
	int list1[80], list2[80], list3[80];
	int size1, size2;
	cout << "Enter list1: ";
	cin >> size1;
	for (int i = 0; i < size1; i++)
		cin >> list1[i];
	cout << "Enter list2: ";
	cin >> size2;
	for (int i = 0; i < size2; i++)
		cin >> list2[i];
	merge(list1, size1, list2, size2, list3);
	cout << "The merged list is ";
	for (int i = 0; i < size1 + size2; i++)
        cout << list3[i] << " ";
	return 0;
}