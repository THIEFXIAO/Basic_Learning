/*找最大值、调整数组顺序、冒泡排序*/
/*
#include<iostream>
using namespace std;
*/

/*
 find the max number.
int main()
{
	int num[5] = { 300,350,200,400,250 }, max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (num[i] >= max)
			max = num[i];
	}
	cout << "The max number is:" << max << endl;


	system("pause");
	return 0;
}
*/

/*change the order
int main()
{
	int num[9] = { 1,2,3,4,5,6,7,8,9 }, change = 0, size = 0;
	size = sizeof(num) / sizeof(num[0]);
	
	for (int i = 0; i < size / 2; i++)
	{
		change = num[size - 1 - i];
		num[size - 1 - i] = num[i];
		num[i] = change;
	}
	for (int j = 0; j < size; j++)
	{
		cout << num[j] << endl;
	}
	system("pause");
	return 0;
}
*/

/*Bubble sort
int main()
{
	int array[9] = { 4,2,8,0,5,7,1,3,9 }, temp = 0, flag = 1, i = 0;
	while (flag == 1)                                                   //做标记，当没有发生排序的时候就跳出来了
	{ 
		flag = 0;
		for (int j = 0; j < sizeof(array) / sizeof(array[0]) -i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				flag = 1;
			}	
		}
		i++;
	}
	for (int i = 0; i < sizeof(array) / sizeof(array[0]) - 1; i++)
	{
		cout << array[i] << endl;
	}
	system("pause");
	return 0;
}
*/