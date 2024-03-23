#include<iostream>
using namespaces std ;
int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        int n,m ;
        cin >> n>> m; 
        int arr[n][m] ;
        for(int i=0 ; i< n ; i++)
        {
            for(int j=0 ;j< m ;j++)
                cin >> arr[i][j] ;
        }
    } 
    int count = n* m ;
    for(int i= 1 ;i<n-1 ;i++)
    {
        for(int j=1 ; j< m-1 ;j++)
        {  
            int min1 = (N-1-i < M-1-j ? N-1-i : M-1-j ) ;
            int min2 = (i<j ? i:j)  ;
            int min3 = (min1<min2? min1 : min2)+1 ;

            for(int k=1 ; k<min3 ;k++)
            {
                if(arr[i][j-k] == arr[i][j+k] && arr[i-k][j]==arr[i+k][j])
                    count++ ;
                    else break ;
            }
        }
    }
    cout << count ;
}