
//Printing a pattern 2
/*
	1
	1 2 
	1 2 3
	1 2 3 4
*/

#include<iostream>


int main()
{
	int n;
	std::cout << "Enter the number of occurence: ";
	std::cin >> n;


	for(int i = 1 ; i <= n;i++)
	{
		for(int j = 1 ; j <= i ; j++)
		{
			std::cout << j << " ";
		}
	std::cout << '\n';
	}

	return 0;
}

