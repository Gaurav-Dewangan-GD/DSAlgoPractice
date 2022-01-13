#include<iostream>

int main()
{
	int n;
	std::cout << "Enter the value of rows: ";
	std::cin >> n;

	int i = 1;

	while( i <= n)
	{
		int j = 1;

		while(j <= i)
		{
			std::cout << i << " ";
			j++;
		}
		i++;
		std::cout << '\n';
	}
	return 0;
}
