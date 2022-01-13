//printing this pattern
/*
	1
	2
	3
	4
	5
	4
	3
	2
	1
*/

#include<iostream>

int main()
{
	int n;
	std::cout << "Enter the max number: ";
	std::cin >> n;

	/*for(int i = 0 ;  i < 2*n ; i++)
	{
		int max_num = i > n ? 2*n - i : i;
		for(int j =0 ; j < max_num ; j++)
		{
			std::cout << ;
		}
		std::cout << '\n';
	}*/

	for( int i = 1 ; i < 2*n ;i++)
	{
		if( i <= n)
		{
			std::cout << i << '\n';
		}
		else 
			std::cout << 2*n - i << '\n';
	}


	return 0;
}
