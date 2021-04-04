/* 结构体嵌套
#include<iostream>
#include<string>
using namespace std;

struct Student
{
	string name;
	int score = 0;
};
struct Teacher
{
	string name;
	Student stu[5];
};

void writ(Teacher* teacher, int size)
{
	Student Stu_group[3][5] = { {{"A",68},{"B",69},{"C",70},{"D",71},{"E",72}},{{"F",88},{"G",89},{"H",90},{"I",91},{"J",92}},{{"K",83},{"L",66},{"M",78},{"D",81},{"N",82}} };
	string TeacherName[3] = { "Mr.Wang","Mr.Li","Mr.Zhao" };
	for (int i = 0; i < size; i++)
	{
		teacher[i].name = TeacherName[i];
		for (int j = 0; j < 5; j++)
		{
			teacher[i].stu[j].name = Stu_group[i][j].name;
			teacher[i].stu[j].score = Stu_group[i][j].score;
		}

	}
}

int main()
{
	Teacher Teac_group[3];
	writ(Teac_group, sizeof(Teac_group) / sizeof(Teac_group[0]));

	for (int i = 0; i < 3; i++)
	{
		cout << "teacher's name: " << Teac_group[i].name << "   ";
		cout << "his student and score:" << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << Teac_group[i].stu[j].name << " : ";
			cout << Teac_group[i].stu[j].score << " ; ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
*/

/*结构体冒泡排序
#include<iostream>
#include<string>
using namespace std;

struct hero
{
	string name;
	int age = 0;
	string sex;
	
};

void BubbleSort_age(hero* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				hero temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void Print(hero* arr, int size)
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i].name << "  " << arr[i].age << "  " << arr[i].sex << endl;
	}
}

int main( )
{
	hero SanGuo[5] = { {"LiuBei",23,"male"},{"GuanYu",22,"male"},{"ZhangFei",20,"male"},{"ZhaoYun",21,"male"},{"DiaoChan",19,"female"} };
	int length = sizeof(SanGuo) / sizeof(SanGuo[0]);
	BubbleSort_age(SanGuo, length);
	Print(SanGuo, length);
	system("pause");
	return 0;
}
*/
