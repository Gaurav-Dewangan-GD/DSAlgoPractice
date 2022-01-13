#include<iostream>

int main()
{
	int n;
	std::cout << "Enter the number: ";
	std::cin >> n;

	int sum = 0;
	int product = 1;

	while(n!=0)
	{
		int remainder = n%10;
		sum += remainder;
		product *= remainder;
		n = n/10;
	}

	int result = product - sum;

	std::cout << result;

	return 0;
}
