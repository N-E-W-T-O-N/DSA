#include<iostream>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
    int n ;
    cin >> n ;
    int sum =0 ,flag =0 , a=0;

    for(int i=0 ; i< n;i++)
    {
        cin >> a ;
        if(a==5)
        sum+=5 ;
        else if(a-5<=sum)
                sum=sum-a+5 ;
        else 
            {
                flag =1 ;
                cout<<"NO\n";
                break;
            }
    }

    if(flag==0) 
    cout<<"YES\n" ;
    }

return 0 ;
}