// tempconv.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	float celsius;
	cin >>celsius;

	float fahrenheit = celsius *1.8+ 32;
	cout << celsius << "is " << fahrenheit << "fahrenheit"<<endl;
}