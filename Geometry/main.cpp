#include <iostream>
using namespace std;
//#define TASK_0
//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_5
#define TASK_6

void main()
{
#ifdef TASK_0
	int num = 5;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}
#endif // TASK_0

#ifdef TASK_1
	int num = 5;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}
#endif // TASK_1

#ifdef TASK_2
	int num = 5;
	for (int i = 0; i < num; i++)
	{
		for (int j = num; j > i; j--)
		{
			cout << " * ";
		}
		cout << endl;
	}
#endif // TASK_2

#ifdef TASK_3
	int num = 5;

}
#endif // TASK_3

#ifdef TASK_4
int num = 5;
for (int i = 0; i < num; i++)
{
	for (int j = 0; j < num; j++)
	{
		if (i + j == num - 1 || i + j > num - 1) cout << " * ";
		else cout << "   ";
	}
	cout << endl;
}
#endif // TASK_4

#ifdef TASK_5
int num = 10;
for (int i = 0; i < num; i++)
{
	for (int j = 0; j < num; j++)
	{
		if (i + j == num / 2 - 1 || (i - 5) + j == num - 1) cout << "/";
		else if (i == j - 5 || i - 5 == j)cout << "\\";
		else cout << "  ";
	}
	cout << endl;
}
#endif // TASK_5

#ifdef TASK_6
int num = 5;
for (int i = 0; i < num; i++)
{
	for (int j = 0; j < num; j++)
	{
		if (i == j || i + j == num - 1 || (j == (num - 1) / 2 && i % 2 == 0) || (i == (num - 1) / 2 && j % 2 == 0)) cout << " + ";
		else cout << " - ";
	}
	cout << endl;
}
#endif // TASK_6


}