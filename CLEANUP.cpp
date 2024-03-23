#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t , n ;
    cin >> t ;
    while(t--)
    {
        int n , m ;
        cin >> n >> m;

        int  arr[m] , a1[n+1] ;

        for(int i=0 ;i<m ;i++)
            cin>>arr[i] ;
        sort(arr,arr+m) ;

        for(int i= 1 ;i<=n;i++)
        a1[i] = i ;

        for(int i=0 ;i<m ;i++)
            a1[arr[i]] = 0 ;

        vector<int> chef ,ass ;
        bool c = true ;
        for(int i=1 ;i<=n ;i++) 
        {
            if(a1[i]==0)
                continue;
            if(c)    
                chef.push_back(a1[i]) ; 
            else 
                ass.push_back(a1[i]) ; 
            c=!c ;      
        }   

        for(auto x:chef)
            cout<<x <<" " ;

        cout<<endl ;

        for(auto x:ass)
            cout<<x<<" " ;    


    }
}