#include<iostream>
#include<climits>
int main()
{
	int n;
	std::cout << "Enter the integer: ";
	std::cin >> n;

	int flag = 0;
	int ans = 0;
	while( n!=0)
	{
		int digit = n%10;
		ans = ans*10 + digit;
		if(ans > INT_MAX/10 || ans < INT_MIN/10 )
		{
			flag = 1;
			break;
		}
		n = n/10;
	}
	if(flag){
		std::cout <<"0" << '\n';
	}
	else {
	std::cout << "The reverse of number is : " << ans << '\n';
	}
	return 0;
}
