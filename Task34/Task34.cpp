#include<iostream>
#include<string>

using namespace std;

int factorial(int num)
{
	int total = 1;
	for (int i = num; i > 0; i = i - 1)
	{
		total = total * i;
	}
	return total;
}

int main(void)
{
	int Overall = 0;
	int Total = 0;
	for (int i = 3; i < 999999999999; i++)
	{
		Total = 0;
		string NumString =  to_string(i);
		for (char C : NumString)
		{
			int c = C;
			c = c - 48;
			Total = Total + factorial(c);
		}	
		if (Total == i)
		{
			cout << Total << endl;
			Overall = Overall + Total;
		}	
	}
	cout << Overall << endl;
	return 0;
}


