//c++ program of finding even or odd number using functions


#include<iostream>

void isEven(int a)
{
	if( a%2 == 0)
	{
		std::cout << "Is even number! " << '\n';
	}
	else
	{
		std::cout << "Is odd number! " << '\n';
	}
}

int main()
{
	int n;
	std::cout << "Enter the number : ";
	std::cin >> n;

	isEven(n);

	return 0;
}
