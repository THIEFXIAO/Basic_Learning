/*click bord
从1开始数到数字100， 如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出
*/
/*
#include<iostream>
using namespace std;

int main()
{
	int num = 1, shi = 0, ge = 0, yu = 0;
	for ( num = 1; num < 100; num++)
	{
		shi = num / 10 % 10; //这里的%10其实可以去掉，除以整形本来就会削掉小数点后面的
		ge = num / 1 % 10;
		yu = num % 7;
		if (shi == 7 || ge == 7 || yu == 0)
			cout << "click table" << endl;
		else
		{
			cout << num << endl;
		}
	}

	system("pause");
	return 0;
}
*/