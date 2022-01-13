//c++ program to find sum of array elements

#include<iostream>

int sum_of_array(int arr[], int size)
{
	int sum =  0 ;
	for(int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int main()
{
	int size;
	std::cout << "Enter the size of array: ";
	std::cin >> size;
	std::cout <<'\n';

	int a[100];

	std::cout << "Enter the array elements: ";
	for(int i = 0; i < size ; i++)
	{
		std::cin >> a[i];
	}

	std::cout << "The sum of array element is: "<<sum_of_array(a,size)<<'\n';

	return 0;
}







