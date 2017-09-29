// Read code below and try to identify any bug and then fix it. 
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	cout << "This program will crash"
	<< endl;
	//##1 add the cout
//## initialize the sum with zero
	int nSum=0;
	int nNums;

	// accumulate input numbers until the
	// user enteres a negative number, then
	// return the average
	nNums = 0;
	while(true)
	{
		// enter another number to add
		int nValue;
		cout << "Enter another number:";
		cin >> nValue;
		cout << endl;

		// if the input number is negative...
		if(nValue < 0)
		{
			// ... then output the average
			cout << "Average is: "
				 << nSum/nNums
				 << endl;
			break;
		}

		// not negative, add the value to
		// the accumulator
		//##add an increment operation to find the average
		nNums++;
		nSum += nValue;
	}

	cin.ignore(10000, '\n');
	return 0;
}

