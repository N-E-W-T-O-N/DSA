#include<bits/stdc++.h>
using namespace std ;
int search(int low ,int high ,long k,long arr[])
{
	if(high<low)
		return -1 ;
		
	int mid = low + (high-low)/2 ;
	if(arr[mid]==k)
		return mid ;
	if(k<arr[mid])
		return search(low,mid-1,k,arr) ;
	else 
		return search(mid+1,high,k,arr) ;		
}
int main()
{
	int  n ;
	cin >> n;
	long  k ,arr[n] ;
	cin>>k;
	for(int i = 0 ; i<n ;i++)
		cin >> arr[i] ;
	
	sort(arr,arr+n) ;
	
//	for(int i=0 ;i< n;i++)
	//	cout<<arr[i] <<" ";
	//cout<<endl;
	long ans = 0 ;
	for(int i =0 ;i<n-1;i++)
	{
		if(search(i+1,n-1,k+arr[i],arr)!=-1)
		{
		  ans++;
		  int t =search(i+1,n-1,k+arr[i],arr) ;
			for(int j= t-1 ; arr[j]==arr[j+1] && j>=0;j-- )
			{
			  ans++ ;
			}
			for(int j=t+1 ; arr[j-1]==arr[j] && j<n; j++ )
			{
			  ans++ ;
			}
		}
		
	}
	cout<<ans ;
}

