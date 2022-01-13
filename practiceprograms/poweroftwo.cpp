#include<iostream>
#include<cmath>
int main()
{
	int n;
	std::cout << "Enter the number: ";
	std::cin >> n;
	
	bool flag = 0;
	int ans = 1;
	for(int i=0; i<=30; i++)
	{
		if(ans == n)
		{
			flag = 1;
		}
		else { 
			flag =0;
		}
		ans = ans * 2;
	}


	if(flag)
	{
		std::cout << "The number is power of two "<<'\n';
	}
	else
	{
		std::cout << "The number is not a power of two " << '\n';
	}
	
	return 0;

}
