//c++ program to swap alternate elements of an array

#include<iostream>

void swap_Alt(int arr[],int n)
{
	for(int i = 0; i < n; i= i+2)
	{
		if( i+1 < n)
		{
	    	
		   	 std::swap(arr[i],arr[i+1]);
		}
	}
}

void array_input(int arr[],int n)
{
	std::cout << "\nEnter the array elements : ";
	for(int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
}

void array_output(int arr[],int n)
{
	for(int i= 0 ; i < n; i++)
	{
		std::cout << arr[i] << " " ;
	}
}

int main()
{
	int a[100]; 
	int n;
	std::cout << "Enter the array size: ";
	std::cin >> n;

	array_input(a,n);
	swap_Alt(a,n);
	array_output(a,n);
	return 0;
}
