
#include<iostream>

int main(void)
{
	using namespace std;
	const char * months[] =
	{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	const int year[3] =
	{
		1995,
		1996,
		1997
	};
	int sales[3][12];
	int sum[3] = {0, 0, 0};

	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 12; i++)
		{
			cout << "Enter books sales for the month of " << months[i] << " in " << year[j] << ": ";
			cin >> sales[j][i];
			sum[j] += sales[j][i];
		}
    cout << "The total sales for the year is " << sum[j] << endl;
	}

	return 0;
}
