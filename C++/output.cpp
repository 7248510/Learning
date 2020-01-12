#include <iostream>

int main()
{
	//using namespace std; unlocks every name.(C++ Primer)
	using std::cout; //Has more control since it is not using the entire namespace.
	char string[10] = "variable.";
	//initializing the variable
	std::cout << "Hello\n";
	std::cout << "Next Line..." << std::endl;
	cout << "This is a test.";
	printf("A C function within a C++ program.\n");
	printf("Time to learn C++!\n");
	std::cout << "Adding a " << string << std::endl;
	return 0; //Statement is completed
}

