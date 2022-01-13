#include<iostream>
#include<cmath>

int main()
{
	int n;
	std::cout << "Enter the integer: ";
	std::cin >> n;

	int ans = 0;
	int mask = 0;
	int i = 0;
	int m = n;
	if( m == 0)
	{
		std::cout<<"0"<<'\n';
	}
	while(m!=0)
	{	
		mask = (mask << 1) | 1;
		m= m >> 1;
		
	}
	
	ans = (~n)&mask;
	std::cout << "The complement of integer is : "<< ans<< '\n';

	return 0;

}
