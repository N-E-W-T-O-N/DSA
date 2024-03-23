#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int m ,n ;
    cin >> m >> n;
    vector<vector<int>> a(m,vector<int>(n,0)) , b(m,vector<int>(n,0));
    
    for(int i=0;i<m ;i++)
      for(int j= 0 ; j<n ; j++)
       cin>> a[i][j]  ;
    

        
       for(int i=0;i<m ;i++)
      for(int j= 0 ; j<n ; j++)
       cin>> b[i][j]  ;

    for(int i=0;i<m ;i++)
    {
      for(int j= 0 ; j<n ; j++)
       cout<< a[i][j]+b[i][j]<<" "  ;
       cout<<"\n";      
    }
    for(int i=0;i<m ;i++)
      {
        for(int j= 0 ; j<n ; j++)
        {int t=0;
            for(int k=0 ;k<n ;k++)
                t+=a[i][k]*b[k][j]  ;
        cout<<t<<" ";
        }   
        cout<<"\n";
      }  
    return 0;
  }