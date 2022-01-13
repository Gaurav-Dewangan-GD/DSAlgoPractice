#include<iostream>


int main()
{
	int n;
	std::cout << "Enter the no .of rows: ";
	std::cin >> n;

	int i = 1;
	while(i <= n)
	{
		int j = 1;
		while( j <= n)
		{
			std::cout << j << " ";
			j++;
		}
	i++;
	std::cout << '\n';
	}
 return 0;
}
