#include<bits/stdc++.h>
using namespace std ;
int main()
{
	int n , q ,t , x ;
	cin >> n ;
	
	vector<int> arr(n) ;
	
	for(int i = 0 ; i<n ;i++)
	{
		cin >> arr[i] ;
	}
	
	cin >>q ;
	sort(arr.begin(),arr.end()) ;
	// for(int i = 0 ;i <n ;i++)
	// 	cout<<arr[i]<< " ";
	// 	cout<<endl ;
	while(q--) 
	{
	int limit ;
	cin >> limit ;
	int count =0  ;
	int sum = 0 ;
	int i=0 ;
	//vector<int> a = arr ;
	while(sum<=limit && arr[i]<=limit	)
	{
		sum+=arr[i] ;
		count++ ;
		
	}
	
	cout<<count<<"\n" ;
	}

	return 0 ;
}
