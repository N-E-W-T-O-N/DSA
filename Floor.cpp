#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin >> t;
    while(t--)
    {
      int n ,x;
      cin >> n >> x;
      vector<int> arr(n) ;
      
      for(int i=0 ;i<n;i++)
      cin>>arr[i] ;
      
      
      //bool found=false ;
      int ans = -1 ;
      for(int i=n-1 ;i>=0 ;i--)
      {
        if(arr[i]<=x) 
        {
          ans = i ;
          //found = true ;
          break ;
        }
      }
      
      cout<<ans<<"\n" ;
    }
    return 0;
  }