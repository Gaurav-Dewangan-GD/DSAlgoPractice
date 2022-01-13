
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
			std::cout << count << " ";  
			j++;
			count++;
		}
		std::cout << '\n';
		i++;
	}
	return 0;
}
