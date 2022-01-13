#include<iostream>

int main()
{
	int n;
	std::cout << "\nEnter the n : ";
	std::cin >> n;

	std::cout << "The no. from 1 to n are : ";
//	for(int i = 0; i <=n ; i++)
//	{
//		std::cout << i <<'\n';
//	} 
	
	//for statement also works without any parameter as

	int i = 1;
	for(; ; )
	{
		if( i <=n)
		{
		std::cout << i << '\n';
	
	}
	i++;
	}

	return 0;
}
