


#include<iostream>

int main()
{
	int n;
	std::cout << "Enter the no. of rows: ";
	std::cin >> n;

	int i = 1;

	while (i <= n)
	{
		int j= 1;
		int space = 1;
		while (space <= i - 1)
		{
		    std::cout << " ";
		    space++; 
		}
		int count = i;
		while( j <= n - i + 1)
		{
			std::cout << count;
			count++;
			j++;
		}
		std::cout << '\n';
		i++;
	}

	return 0;
}
