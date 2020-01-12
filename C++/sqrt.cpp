#include <iostream>
#include <cmath> //or you can use math.h
int main()
{
	using std::cout;
	using std::cin;
	double x;
	double x2;
	cout << "Please input a number to square root ";
	cin >> x;
	x2 = x;
	x = sqrt(x); // Square roots the X value.
	cout << "The square root of " << x2 << " is "
	<< x;
}