#include<iostream>

int main()
{
	int n;
	std::cout << "Enter the no. : ";
	std::cin >> n;
	bool p = 1;
	for(int i = 2 ; i < n ; i++)
	{
		if(n%i == 0)
		{
//			std::cout << "Not prime no. "<< '\n';
			p = 0;
			break;
		}
		
	}
	if(p == 1)
	{
		std::cout << "Prime no. "<< '\n';
	}
	else {

		std::cout << "Not prime no. " << '\n';
	}
	return 0;
}
