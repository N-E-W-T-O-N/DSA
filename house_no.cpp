#include<iostream>
#include<cmath>
using namespace std;
typedef long long int ll ;
ll power(ll x , int y)
{
    ll ans=1 ;
    while(y--)
    {
        ans*=x;
    }
    return ans ;
}
int main()
{
    //cout<<pow(10,2)-1 ;
    int t ;
    cin >> t ;
    while(t--)  
    {
        ll x ,  ans = 0 ;
        int p =0;
        cin >> x ;

        ll temp =x ;
        while (temp >0)
        {
            temp=temp/10;
            p++;
        }
        //cout<<p<<"][\n";
        for(ll i =  0 ; i<p ; i++)
        {
            ans +=ll(power(10,i)) ;
            //cout<<ll(power(10,i))<<endl ;
        }

        ans= (x +1)*p -ans;
        cout<<ans<<"\n" ;
    }  
}