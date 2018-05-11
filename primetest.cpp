#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int primetest(int a)
{
	for (int i = 2; i<a; i++)
	{
		if (a%i == 0)
			cout << "1\n";
		else
			cout << "0\n";
		return 0;
	}
}

int main()
{
	int number;
	while (cin >> number)
	{
		if (number == 0 || number == 1)
		{
			cout << "1\n";
		}


		else if (number % 2 == 0)
		{
			cout << "1\n";
		}
		else
		{
			primetest(number);
		}


	}
}
