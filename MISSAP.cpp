#include<iostream>
using namespace std ;
int main()
{
    int t ;
    cin>> t ;
    while(t--)
    {
      long n ,temp = 0 ;
      cin>> n;
      long arr[n] ;
      for(int i=0 ;i<n;i++)
      {
        cin >> arr[i] ;
        temp+=arr[i]  ;
      }  

      long ans = (n+1)*(arr[0]+arr[n-1])/2 ;

      cout<<ans-temp <<'\n';
    }
}
