//c++ program to find nCr (no.of combination based on n and r) using functions

#include<iostream>


int fact(int a)
{
	int f=1;
	if( a == 0 )
	{
		return 1;
	}
	else
	{
			while(a!=0)
			{
			f *= a; //we can also use for loop and multiply i instead of a for efficency
			a--;
			}
			return f;
	}
}



int combination(int n , int r)
{
	int c = ( fact(n)/ (fact(r) * fact(n-r)) );
	return c;
}

int main()
{
	int a, b;
	std::cout << "Enter the value of n and r for combination : ";
	std::cin >> a >> b;

	std::cout << "The number of combination possible for given n and r are : " << combination(a,b);

	return 0;
}

