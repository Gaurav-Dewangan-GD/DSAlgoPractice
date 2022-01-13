#include<iostream>

int main()
{
	unsigned int n;
	std::cout << "Enter the number : ";
	std::cin >> n;
	
	int count = 0;
	while(n!=0)
	{
		if(n&1)
		{
			count++;
		}
			n = n >>1;
		
	}

	std::cout << count;

	return 0;
}
