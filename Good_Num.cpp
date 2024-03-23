#include<iostream>
using namespace std;
#define ll long long int 
bool good_num(ll n)
{
    ll rem ;
    while(n>0)
    {
        rem= n% 3 ;
        if(rem==2)
            return false;
        n=n/3 ;
    }
    return true ;
}
int main()
{
    int t;
    cin >>t ;
    while(t--)
    {
        ll n;
        cin>>n ;
        while(true)
        {
            if(good_num(n)==false )
                n++ ;
            else break ;
        }
        cout<<n<<"\n";
    }    
}