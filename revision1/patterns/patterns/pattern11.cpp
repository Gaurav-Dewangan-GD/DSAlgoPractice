/* pattern program to print the given pattern

	*********
	 *******
	  *****
	   ***
	    *
*/

#include<iostream>

int main()
{
	int n;
	std::cout << "\nEnter the number of rows: ";
	std::cin >> n;
	
	for(int i = 1; i <=n ; i++)
	{
		int odd = 2*i -1;
		for(int j=1; j <= i -1;j++)
		{
			std::cout << " ";
		}
		for(int k = 1; k <= 2*n -odd ; k++)
		{
			std::cout << "*";
		}
		std::cout << '\n';
	}
	return 0;
}

