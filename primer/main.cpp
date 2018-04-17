#include <iostream>

int main()
{
	// ---------------------------------------------------------------------------
	// Excersise 1.8:
	// Indicate which, if any, of the following output statements are legal:
	// std::cout << "/*";					// legal
	// std::cout << "*/";					// legal
	// std::cout << /* "*/" */;				// illegal
	// std::cout << /* "*/" /* "/*" */;		// illegal
	// 
	// After you've predicted what will happen, test your answers by compiling a
	// program with each of these statements. Correct any errors you encounter.
	// ---------------------------------------------------------------------------
	

	std::cout << "/*";
	std::cout << "*/";
	/*std::cout << /* "*\/" ;*/
	/*std::cout << /* "*\/" /* "/*" ;*/
}