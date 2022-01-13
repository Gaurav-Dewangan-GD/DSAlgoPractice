
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
		
		char ch = 'A'+ n - i;
		while( j <= i )
		{
		std::cout << ch<< " ";
		ch++;
		j++;
		}

		std::cout << '\n';
		i++;
	}

	return 0;
}
