#include<iostream>

int main()
{
	int n;
	std::cout << "Enter the rows: ";
	std::cin >> n;

	int i = 1;
	
	while( i <= n)
	{
		int j = 1;
		while( j <= n)
		{
			char ch = 'A' + j - 1;	
			std::cout << ch  <<" ";
			
			j++;
		}
		i++;
		std::cout << '\n';
	}
	return 0;
}

