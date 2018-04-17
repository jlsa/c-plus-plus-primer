#include <iostream>

int main()
{

	// ------------------------------------------------------------------------
	// Excersise 1.11:
	// Write a program that prompts the user for two integers. Print each
	// number in the range specified by those two integers.
	// ------------------------------------------------------------------------

	int sum = 0;
	int num1 = 0, num2 = 0;
	

	std::cout << "Give two numbers for range calculation." << std::endl;
	std::cin >> num1 >> num2;
	num1 += 1;
	// keep executing the while as long as val is greater than or equal to the 
	// second number
	while (num1 <= num2) {
		sum += num1;		// assigns sum + num1 to sum
		++num1;				// add 1 to num1
	}
	std::cout << "Sum of " << num1-1-num2 << " to " << num2 << " inclusive is " 
		<< sum << std::endl;
	
	return 0;
}

