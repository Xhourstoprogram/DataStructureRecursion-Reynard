#include<iostream>
using namespace std;

int factorialUsingRecursion(int n)
{
	if (n == 0)
		return 1;
	return n * factorialUsingRecursion(n - 1);
}


int factorialUsingIteration(int n){
	int res = 1, i;

	for (i = 2; i <= n; i++)
		res *= i;

	return res;
}

int main()
{
	int num = 5;
	cout << "Factorial of " << num <<
			" using Recursion is: " <<
			factorialUsingRecursion(7) << endl;

	cout << "Factorial of " << num <<
			" using Iteration is: " <<
			factorialUsingIteration(7);

	return 0;
}


