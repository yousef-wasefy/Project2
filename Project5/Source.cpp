//Yousuf Ahmed
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	// Multiplication table
	int number; 
	int x ;
	int z;
	char answer;
	do
	{
		x = 1;
		cout << "Enter a number : ";
		cin >> number;
		z = number;
		for (int n = 1;n <= 20;n++)
		{
			for (int i = 1;i <= 5;i++)
			{
				number = z;
				number *= x;
				x++;
				cout << number << "\t";
			}
			cout << "\n" << endl;
		}
		cout << "Do another (y/n) : ";
		cin >> answer;
	} while (answer == 'y');
	return 0;
}
