/*���˸��ܳɼ�*/

#include<iostream>
using namespace std;

int main()
{
	int score[3][3] = { {100,100,100},{90,50,100},{60,70,80} }, addscore[3] = { 0, 0, 0 };
	string name[3] = { "����","����","����" };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			addscore[i] = addscore[i] + score[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout << name[i] << "���ܳɼ�Ϊ��";
		cout << addscore[i] << endl;

	}

	system("pause");
	return 0;
}