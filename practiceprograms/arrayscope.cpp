
#include<iostream>

void arrupdate(int arr[],int size)
{
	arr[0] =120;
	for(int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " "<<'\n'; //value also changes in actual array
	}
}

int main()
{
	int a[3] = {1,2,3};

	arrupdate(a,3); //we give direct address of a[3] to function instead of value;

	for(int i = 0 ;  i < 3 ; i++)
	{
		std::cout << a[i] << " " << '\n';
	}

	return 0;
}
