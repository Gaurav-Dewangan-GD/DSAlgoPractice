//given a problem where we have an array of 2m+1 size where m are the elements available twice and we one element only once. find out the element that is occured only one time in array

#include<iostream>

void findingelement(int arr[],int n)
{
	int ans = 0;
	for(int i = 0; i < n ; i++)
	{
		ans =  ans ^ arr[i];
	}
	std::cout << "The element that occcured once is : " << ans;
}



int main()
{
	int a[7] = {3,2,3,4,5,5,4};

	findingelement(a,7);
	return 0;
}
	
