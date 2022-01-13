//c++ program to demonstrate functions

#include<iostream>

int p(int a, int b)
{
	int ans = 1;
	for(int i = 1; i <= b ; i++)
	{
		ans = ans * a;
	}

	return ans;
}

int input()
{
	int n;
	std::cout << "Enter the number : ";
	std::cin >> n;
	return n;
}

int main()
{

	int x{input()};
	int y{input()};

	std::cout << "The power of number is : "<< p(x,y);

	return 0;
}
	
