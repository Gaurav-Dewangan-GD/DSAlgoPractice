
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
		while( j <=  i)
		{
			char ch= 'A'+ i+j - 2;
			std::cout << ch << " ";
			j++;
		}
		std::cout << '\n';
		i++;
	}

	return 0;
}
