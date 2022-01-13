

#include<iostream>

int main()
{
	int n;
	std::cout << "Enter the value of rows: ";
	std::cin >> n;

	int i = 1;

	int count = 1;
	
	while( i <= n)
	{
		int j = 1;
	
		while( j <= i)
		{
			std::cout << i << " ";  	
			i = i + 1;
			j++;
		}
		std::cout << '\n';
		
	}
	return 0;
}
