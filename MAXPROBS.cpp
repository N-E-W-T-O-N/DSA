#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long n,k ,i=1;

    cin >> n >> k;

    long a = int(((240-k)*2)/5) ;

   while(i*(i+1) <= a)
    {
        i++ ;
    };

    cout<<i-1 ;
    return 0;
}