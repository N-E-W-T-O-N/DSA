#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    int arr[n][n] ;
    if(n%2==0)
    {
        
        int t =0 ;
        for(int i=0 ; i<n ;i++)
            {
                if(i%2==0)
                    {
                        for(int j=0 ;j<n ;j++)
                            arr[i][j] = ++t ;
                    }
                else
                {
                    for(int j=n-1 ;j>=0 ;j--)
                        arr[i][j]=++t;
                }
            }
        
    }
    else
    {
        int t =0 ;
        
            for(int i=0 ; i<n ;i++)
            {
                for(int j=0 ;j<n ;j++)
                arr[i][j]=++t;
            }
           
        
    }

    for(int i=0 ; i< n ;i++)
    {
        for(int j=0 ;j< n;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl ;
    }
}