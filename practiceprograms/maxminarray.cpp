//c++ program to get max and min value in an array

#include<iostream>

int max(int arr[], int size)
{
	int max = arr[0];
	for(int i= 0 ; i < size ; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i]; //we can also use max function inbuil as max(arr[0],arr[i];
		}
	}
	return max;
}

int min(int arr[], int size)
{
	int min =  arr[0];
	for(int i = 0; i < size; i++)
	{
		if( arr[i] < min)
		{
		min = arr[i];	//we can also use min function min();	
		}
	}
	return min;
}

int main()
{
	int a[3] = { 1,2,3};

	std::cout << "maximum number in array is: " <<max(a,3) << '\n';
	std::cout << "minimum number in array is: " <<min(a,3) << '\n';

	return 0;

}



