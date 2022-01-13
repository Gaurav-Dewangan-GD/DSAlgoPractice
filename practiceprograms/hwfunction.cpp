#include<iostream>

int ap(int n)
{
	return (3*n + 7 );
}

int main()
{
	int a;
	std::cout << "Enter the number : ";
	std::cin >> a;

	std::cout << "The number is in " << ap(a) << "th position. "<< '\n';

	return 0;
}
