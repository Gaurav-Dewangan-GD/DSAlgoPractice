//c++ program to print decimal to binary of negative number

//logic to find negative binary of decimal number first find  2's complement of binary form. revers + 1

//to display the negative binary in console again find it's 2's complemnet and then display it



#include<iostream>
#include<math.h>
int main()
{
	int n;
	std::cout << "Enter the decimal number ";
	std::cin >> n;


	int ans = 0;
	int i = 0;
	while( n != 0)
	{
		int bit =  n^1 + 1;
		
		ans = (bit * pow(10,i)) + ans;
		
		n = n << 1;
		i++;
	}

	std::cout <<  ans;

	return 0;
}
