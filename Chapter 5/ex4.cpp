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
	int sales[12];
	int sum = 0;

	for (int i = 0; i < 12; i++)
	{
		cout << "Enter books sales for the month of " << months[i] << ": ";
		cin >> sales[i];
		sum += sales[i];
	}

	cout << "The total sales for the year is " << sum << endl;
	return 0;
}
