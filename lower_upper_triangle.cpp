#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int m , n ;
    cin >> m >>n ;
    int a[m][n] ;
    //cout<<0;
    for(int i=0;i<m ;i++)
      for(int j= 0 ; j<n ; j++)
       cin>> a[i][j]  ;

    for(int i=0;i<m ;i++)
      {
      for(int j= 0 ; j<n ; j++)
        cout<< (j<=i?a[i][j]:0)<<" "  ;
      cout<<"\n" ;  
      }
    
    for(int i=0;i<m ;i++)
      {
      for(int j= 0 ; j<n ; j++)
        cout<< (j<i?a[i][j]:0)<<" "  ;
      cout<<"\n" ;  
      }  
       
       
    return 0;
  }