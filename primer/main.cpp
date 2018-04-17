#include <iostream>

int main()
{

	// ------------------------------------------------------------------------
	// Excersise 1.10:
	// In addition to the ++ operator that adds 1 to its operand, there is a
	// decrement operator (--) that subtracts 1. Use the decrement operator to
	// write a while that prints the numbers from ten down to zero.
	// ------------------------------------------------------------------------

	int sum = 0, val = 10;
	// keep executing the while as long as val is greater than or equal to 0
	while (val >= 0) {
		sum += val;		// assigns sum + val to sum
		--val;			// subtracts 1 from val
	}
	std::cout << "Sum of 0 to 10 inclusive is " << sum << std::endl;
	
	return 0;
}

