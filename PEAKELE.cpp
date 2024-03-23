#include<iostream>
using namespace std;
int main()
{
    int t ;
    cin >> t ;
    while(t-- )
    {
        int n , a ,ans= 0 , i = -1 ;

        cin>> n ;
        for(int j= 0 ;j<n ;j++)
        {
            cin >> a ;
            if(a >ans )
            {
                ans = a ;
                i = j ;
            }

        }

        cout << i<<"\n" ;
    }
    return 0; 
}