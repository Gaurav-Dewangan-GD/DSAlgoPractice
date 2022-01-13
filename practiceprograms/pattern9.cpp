#include<iostream>

int main()
{
	int n;
	std::cout << "Enter the rows : ";
	std::cin >> n;

	char ch = 'A';

	int i = 1;

	/*while( i <= n)
	{
		int j =  1;
		while( j <= n)
		{
			std::cout << ch << " ";
			j++;
		}
		ch++;
		i++;
		std::cout << '\n';
	}*/

	while( i <= n)
	{
		int j =  1;
		while( j <= n)
		{
			char cha = 'A' + i - 1;
			std::cout << cha<< " ";
			j++;
		}
		
		i++;
		std::cout << '\n';
	}
	return 0;
}
