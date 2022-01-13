
#include<iostream>

int main()
{
	int n;
	std::cout << "Enter the no. of rows: ";
	std::cin >> n;

	int i = 1;
	char ch = 'A';
	while (i <= n)
	{
		int j= 1;
		while( j <= i)
		{
			std::cout << ch << " ";
			ch++;
			j++;
		}
		i++;
		std::cout << '\n';
	}

	return 0;
}
