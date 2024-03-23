#include<set>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int t ;
    cin>> t ;
    while(t--)
    {
        int n ;
        cin>> n;
        int sum  = 1 ;
        for(int i = 2 ;i< ceil(sqrt(n)) ; i++ )
        if(n%i==0)
        {
            sum+=i ;
            if(n/i!=i)
            sum+=n/i ;
        }
        if(n == sum && n!=1) // main step n== 1
            cout<<"true\n";
        else
            cout<<"false\n" ;    
    }
}