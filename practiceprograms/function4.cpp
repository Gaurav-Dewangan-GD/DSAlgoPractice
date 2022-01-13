//c++ program to find prime number using functions


#include<iostream>

bool isPrime(int a)
{
	for(int i = 2 ; i < a; i++)
	{
		if( a%i == 0)
		{
			return 0;
		}
	}

	return 1;
}


int main()
{ 
	int n;
	std::cout << "Enter the number : ";
	std::cin >> n;

	if(isPrime(n))
	{ 
		std::cout << "Is prime number " << '\n';
	}
	else
		std::cout << "Is not prime number " << '\n';
	
	return 0;
}
