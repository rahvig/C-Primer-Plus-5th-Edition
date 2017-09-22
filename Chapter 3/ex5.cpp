#include<iostream>

int main(void)
{
	using namespace std;
	cout << "How many miles have you driven? ";
	double miles;
	cin >> miles;
	cout << "How many gallons have you used? ";
	double gallons;
	cin >> gallons;
	cout << "Your car has gotten " << miles/gallons << " miles per gallon" << endl;
}
