// C++ Program to find Product
// of 2 Numbers using Recursion
#include <bits/stdc++.h>
using namespace std;

// recursive function to calculate
// multiplication of two numbers
int product(int x, int y)
{
	// if x is less than
	// y swap the numbers
	if (x < y)
		return product(y, x);

	// iteratively calculate
	// y times sum of x
	else if (y != 0)
		return (x + product(x, y - 1));

	// if any of the two numbers is
	// zero return zero
	else
		return 0;
}

// Driver Code
int main()
{
	int x = 5, y = 2;
	cout << product(x, y);
	return 0;
}
