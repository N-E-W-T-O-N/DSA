#include<iostream>
using namespace std ;
int main()
{
	/* 
	n = Soldier
	m= current gems 
	x= gem required for upgrade
	y= gem get by kill a soldier
	*/
	int n , m ,x ,y ; 
	cin >> n >> m >> x >> y;
	int ans = m/ x ;
	if(ans>=n) //All can be upgrade
		ans = n ;
	else
	{
		m= m-ans * x;
		n= n-ans ;
		while(n>0)
		{
			if(m<x && n!=0)
			{
				n-- ;
				m=m+y-x ;
				ans++ ;
			}
			if(m>=x && n!=0)
			{
				n-- ;
				m=m-x ;
				ans++;
			}
		}
	}
	cout<<ans;	
}
