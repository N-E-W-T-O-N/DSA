#include <bits/stdc++.h>
  using namespace std;

int main()
{
 
    int t ;
    cin >> t;

    while(t--)
    {
      long n ;
      cin>>n ;
      
      int arr[n] ;
      for(int i=0 ;i<n ;i++)
        cin >> arr[i] ;
      
      
      long  l =0  , r = n-1 , ans = -1  ;
      
      
      while(l<r)
      {
        
       long mid =(l+r)/2 ; 

       if(arr[mid]==1 && arr[mid-1]==0 )
       {
        ans = mid ; 
        break ;
       }
       else if(arr[mid]==0 && arr[mid+1] == 1  )
          {ans = mid+1; break ;}

        else 
        {
          if(arr[mid]==0)
            l= mid +1;

          else 
          r=mid-1;
        }
      };
      cout<<ans<<"\n" ;
    }
    return 0;
  }