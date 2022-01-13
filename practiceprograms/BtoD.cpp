#include<iostream>
#include<math.h>
int main()
{
	int n;
	std::cout << "Enter the value of n: ";
	std::cin >> n;

	int ans = 0;
	int i = 0;
	while(n !=0)
	{
		int bit = n%10;

		if(bit == 1)
		{
			ans =   pow(2,i) + ans;
		}
		n = n /10;
		i++;
	}

	std::cout << ans;

	return 0;
}

