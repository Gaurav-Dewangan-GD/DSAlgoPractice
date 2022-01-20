//Pattern program for pattern
/*
	*
	* *
	* * *
	* *
	*
*/

#include<iostream>

int main()
{
	int n;
	std::cout << "Enter the max number of rows: ";
	std::cin >> n;
	
	for(int row = 0;  row < 2*n; row++)
	{
		int column_in_row = row > n ? 2*n - row: row;
		for( int col = 0 ;  col < column_in_row; col++)
		{
			std::cout << "* ";
		}
	std::cout << '\n';
	}
	return 0;
}

	//vague solution to the problem
/*
	for(int i = 0 ; i < 3 ; i++)
	{
		for( int j = 0 ; j <= i ; j++)
		{
			std::cout << "* ";
		}
	std::cout << '\n';
	}

	for(int i=2 ; i > 0; i--)
	{
		for(int j=i ; j > 0 ; j--)
		{
			std::cout << "* ";
		}

	std::cout << '\n';
	}
	return 0;
}*/

	



