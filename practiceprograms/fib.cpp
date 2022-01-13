#include<iostream>


int main()
{

	int n;
	std::cout << "Enter the total no. of numbers in fibonacci series: ";
	std::cin >> n;

	int f = 0 ;
	int s = 1;
	int t ;
	std::cout << "The fibonacii series till " << n << " is : ";

		std::cout << f <<" ";
		std::cout << s <<" ";
	for ( int i = 0 ; i <=n; i++)
	{
		t = f+s;
		std::cout << t << " ";
		f = s;
		s = t;
	}
	return 0;
}
