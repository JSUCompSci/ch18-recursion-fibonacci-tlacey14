/********This Program Prints Fibonacci Sequence*******/

#include <iostream>

using namespace std;



int main()
{
	int n;
	cout << "Enter a positive number..." << endl;
	cin >> n;
	for (int x = 0; x < n; x++)
		cout << fib(x) << " ";
	cout << endl;

	return 0;
}
int fib(int n)
{

	if (n < 2)
		return n;
	else if (n >= 2)
		return fib(n - 1) + fib(n - 2);
}



