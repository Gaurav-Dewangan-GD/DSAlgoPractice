#include<iostream>

int main()
{
	int a = 2;
	int b = 3;
	std::cout <<(a&b) << '\n';
	std::cout << (a|b )<< '\n';
	std::cout << ( a^b) << '\n';
	std::cout <<  (~4) << '\n';

	std::cout << ( 17 >> 1) << '\n';
	std::cout << ( 17 >> 2) << '\n';
	std::cout << ( 19 << 1) << '\n';
	std::cout << ( 21 >> 2) << '\n';
	return 0;
}
