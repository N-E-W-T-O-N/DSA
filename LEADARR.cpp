#include<iostream>
#include<vector>
using namespace std ;
int main()
{
	int t ;
	int n ;
	cin >> t;
	while(t--)
	{
		cin>>n ;

		vector<int>v(n) , ans(n) ;
		for(int i=0;i<n;i++)
			cin>> v[i]  ;
		ans[n-1]=v[n-1] ;
		cout<<ans[n-1] ;	
		for(int i=n-2;i>=0;i--)
		{
		if(v[i]>=ans[i+1])
			{
			cout<<" "<<v[i];	
			ans[i]=v[i] ;	
			}
		else ans[i]=ans[i+1] ;		
		}	
		cout<<"\n";	
		
	}
}
