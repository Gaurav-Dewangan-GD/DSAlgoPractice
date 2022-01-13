//c++ program to demonstrate array


#include<iostream>


void print_array(int arr[], int size)
{
	std::cout << "Printing the array: ";
	for(int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout <<'\n';
	
}
int main()
{
	int a[10] = {1};
	print_array(a,10);

	std::cout << "size of array : " << sizeof(a)/sizeof(int);

	char alpha[5] =  {'a','b','c','d'};


	return 0;
}
