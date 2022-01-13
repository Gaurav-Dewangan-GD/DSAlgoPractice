#include<iostream>

bool search(int arr[], int size, int key)
{
	for(int i = 0; i < size; i++)
	{
		if(arr[i] == key)
		{
		  return 1;
		}
	}
	return 0;
}

int main()
{
	int a[5] = {1,2,3,4,5};

	int key;
	std::cout << "Enter the element : ";
	std::cin >> key;

	if(search(a,5,key))
	{
		std::cout << "\nElement present!"<<'\n';
	}
	else
		std::cout << "Element not found!"<<'\n';

	return 0;
}
