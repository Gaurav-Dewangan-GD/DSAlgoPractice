// find total no. of set bits in given number using function

#include<iostream>


int totalcount(int a, int b)
{
	int count1 = 0;
	int count2 = 0;
	int countT;

	while (a){
		count1 += a & 1;
		a >>= 1;
	}
	while (b){
		count2 += b & 1;
		b >>= 1;
	}
	countT = count1 + count2;
	return countT;
}

int main()
{
	int x,y;
	std::cout <<"Enter both value : ";
	std::cin >> x >> y;

	std::cout << "The number of total set bits are : " <<totalcount(x,y) << '\n';

	return 0;
}

