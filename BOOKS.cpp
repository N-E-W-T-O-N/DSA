#include<iostream>
using namespace std ;
int main()
{
	long n,k ,i,j;
	cin >> n >> k ;
	
	long arr[n] ;
	for(long i = 0 ;i<n; i++)
	{
		cin >> arr[i] ;
	}
	
	for(long x=0 ;x<n;x++)
	{
		if(arr[x]>k)
			{
				i=x ; break;
			}
	}
	
	for(long y=n-1 ;y>=0;y--)
	{
		if(arr[y]>k)
		{
			j = y ; break;
		}
	}
	
	cout << j-i+1 ;
}
