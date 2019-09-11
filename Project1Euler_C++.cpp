/*
This program solves Problem 1 of Project Euler which is:
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>
using namespace std;

int main()
{
	int eulerSolution = 0; // Variable to hold the sum of multiples of 3 and 5 below 1000

	for (int i = 1; i < 1000; i++)  // This loops through numbers below 1000
	{
		if (i % 3 == 0)	// Checks if the number is a multiple of 3
			eulerSolution = eulerSolution + i;	// Add number to variable
		if (i % 5 == 0)	// Checks if the number is a multiple of 5
			eulerSolution = eulerSolution + i;	// Add number to variable
		if (i % 3 == 0 && i % 5 == 0)	// Removes duplicates; the numbers which are both multiples of 3 and 5 will be added twice
			eulerSolution = eulerSolution - i;	// Add number to variable
	}

	// Display results and exit
	cout << "PROJECT EULER PROBLEM 1 SOLUTION" << endl;
	cout << "The sum of all multiples of 3 and 5 below 1000 is: " << eulerSolution;
	return 0;
}
