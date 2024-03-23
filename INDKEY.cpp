#include<bits/stdc++.h>
using namespace std ;

long bs(vector<long> v ,long low ,long high,long x)
{
	if(low>high)
	return -1 ;
	
	long mid = (low + high)/2 ;
	
	if (v[mid]==x)
		return mid ;
	else if (x<v[mid])	
		return bs(v,low,mid-1,x) ;
	else 
		return bs(v,mid+1,high,x) ;	
}
int main()
{
int t ;
cin >> t ;
while(t--)
{
    long n ;
    cin >> n ;
    vector<long> v(n) ;
    for(long i=0 ;i<n ; i++)
    {
        cin >> v[i] ;
    }
    long k ;
    cin >> k ;
    int flag = 0 ;
    
    long left =0 ,right = n-1 ;
    while(left<right)
    {
    	if(v[left]+v[right]==k)
    	{
    		cout<<left<<" "<<right<<"\n" ;
    		flag=1;
    		break;
		}
		else if((v[left]+v[right])<k)
			left++ ;
		else right-- ;	
	}
    if(flag == 0)
        cout<<"no answer\n" ;
}
return 0 ;
}
/*
	for(long i = 0 ;i<n-1 ;i++)
    {
        long t = bs(v,i+1,n-1,k-v[i]) ;
        //auto it =find(v.begin(), v.end(), k-v[i]);
        if(t==-1) continue; //not found
        
        else //sol exist
        {
            cout<<i<<" ";
            long j = t;
            while(v[j]==v[j+1] && j!=n-1)
                j++ ;
            cout<<j<<"\n" ;
            
            flag=1 ;
            break ;
        }
    }
    */
