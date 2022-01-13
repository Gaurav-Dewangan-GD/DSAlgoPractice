//write a c++ program to find how many notes of 500,100,200,10,50,20,and 1 coins constitute a given amount

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the amount : " ;
	cin >> n;

	int cnt500,cnt200,cnt100,cnt50,cnt20,cnt10,cnt1;
	cnt500 = 0,cnt200 = 0,cnt100 = 0, cnt50 = 0, cnt20 = 0, cnt10 = 0, cnt1 = 0;
	if( n > 500)
	{
		cnt500 =  n/500;
		n = n -  (cnt500 * 500);
	}
	if( n > 200)
	{
		cnt200 = n/200;
		n =  n - (cnt200 * 200);
	}
	if( n > 100)
	{
		cnt100 = n/100;
		n =  n - (cnt100 * 100);
	}
	if(n > 50)
	{
		cnt50 = n/50;
		n = n - (cnt50 * 50);
	}
	if( n > 20)
	{
		cnt20 =  n/20;
		n = n - (cnt20 * 20);
	}
	if( n > 10)
	{
		cnt10 = n/10;
		n =  n - (cnt10 * 10);
	}
	if( n >= 1)
	{
		cnt1 =  n/1;
		n = n - (cnt1 * 1 );
	}

	cout << "The number of notes needed to consititue the given amount is : "<<endl;
	cout << "500 : " <<cnt500 << endl;
	cout << "200 : " <<cnt200 << endl;
	cout << "100 : " <<cnt100 << endl;
	cout << "50 : " <<cnt50 << endl;
	cout << "20 : " <<cnt20 << endl;
	cout  << "10 : " <<cnt10 << endl;
	cout << " 1 : " <<cnt1 << endl;

	return 0;

}

