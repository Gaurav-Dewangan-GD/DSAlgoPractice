//c++ program to reverse an array

#include<iostream>

/*void swap(int a,int b)
{
	int t;
	t = a;
	a = b;
	b = t;
}*/

void reverse_arr(int arr[], int size)
{
	int start = 0;
	int end = size -1;

	while(start <= end)
	{
		std::swap(arr[start],arr[end]);
		start++;
		end--;
	}
}

int main()
{
	int a[5] = {1,2,3,4,5};

	reverse_arr(a,5);

	for(int i = 0; i < 5 ; i++)
	{
		std::cout << a[i] << " ";
	}
	return 0;
}
