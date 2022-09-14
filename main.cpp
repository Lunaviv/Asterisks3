#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	int j = 0; //number of " "
	int k = 0; //number of "*"
	int l = 0; //top

	cin >> l;

	for (int i = 1; i <= l; i++)
	{
		//Top of the Diamond
		for (int j = i; j <= l; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= i * 2 -1 ; k++)
		{
			cout << "*";
		}
		cout << endl;
		
	}
	for (int i = l - 1; i >= 1; i--)
	{
		//Bottom of the Diamond
		for (int j = i; j <= l; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= i * 2 - 1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}