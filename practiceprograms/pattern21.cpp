


#include<iostream>

int main()
{
	int n;
	std::cout << "Enter the no. of rows: ";
	std::cin >> n;

	int i = 1;

	while (i <= n)
	{
		int space =  n-i;
		while(space !=0)
		{
			std::cout << " ";
			space = space -1;
		}
		int j = 1;
		while( j <= i)
		{
			std::cout << j ;

			j++;
			
			 
		}

		
			int k = i-1;
			while ( k )
			{
				std::cout << k;
				k--;
			}
		i++;
		std::cout << '\n';
		
	}
	

	return 0;
}
