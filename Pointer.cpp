/*
#include<iostream>
using namespace std;

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* p = &a[0];
	for (int i = 0; i < 5; i++)
	{
		cout << *p << endl;
		*p++;
	}

	system("pause");
	return 0;
}
*/

/*
#include<iostream>
using namespace std;

void swap(int* p1, int* p2)
{
	int temp = *p2;
	*p2 = *p1;
	*p1 = temp;
}
int main()
{
	int a = 1, b = 2;
	swap(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}
*/

// The BubbleSort  with point
/*
#include<iostream>
using namespace std;

void BubbleSort(int* p, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (*(p + j) > *(p + j + 1))
			{
				int temp = *(p + j + 1);
				*(p + j + 1) = *(p + j);
				*(p + j) = temp;
			}
		    //Another solution
			//if (p[j] > p[j + 1])
			//{
			//	int temp = p[j];                
			//	p[j] = p[j + 1];
			//	p[j + 1] = temp;
			//}
			
		}	
	}
}


int main()
{
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	BubbleSort(&arr[0], sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

	system("pause");
	return 0;
}
*/
