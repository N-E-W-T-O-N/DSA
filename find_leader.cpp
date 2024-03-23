#include <bits/stdc++.h>
  using namespace std;
  #include<map>
  #include<set>
  int main()
  {
    //write your code here
    map<int,set<int>> data ;
    int t ;
    long n ,x;
    
    cin >>t ;
    while(t--)
    {
      cin>>n;
      long a[n] ;
      for(long i=0 ;i<n ;i++)
      {
      cin >> a[i] ;
      data[ a[i] ].insert(i) ;
      }
      
      int flag  ;
      map<int,set<int>>::iterator it ;
      for(long i=0 ;i<n ;i++)
      {
        flag =0 ;
        for(it=data.begin() ;it!=data.end() ;it++)
        {
          if(a[i]>=it->first )
          {
            for(auto x:it->second)
            {
              if(a[i]<x)
              {
                flag = 1 ;
                break ;
              }
            }
            if(flag == 1 )
            break ;
          }
        }
        
        if(flag == 0 )
           cout<<a[i]<< " ";
      }
      
      
    }
      
      
    return 0;
  }