#include <iostream>
#include<map>
#include <iterator>
using namespace std;

int main()
{
//write your code here
int t ;
cin >> t ;


while(t--)
{
long n ,a ;
    
map<long,long> m ;
    
cin >> n ;
    
for(int i=0 ;i<n;i++)
    {
    cin>>a ;
    m[a]++ ;
    }


//for(map<long,long>::iterator i =m.begin() ; i!=m.end() ;i++)
//{/
//cout<<i->first<<" "<<i->second<<"\n" ;
//}
long ans = -1 ;


for(map<long,long>::iterator i =m.begin() ; i!=m.end() ;i++)
{
    if(i->second > int(n/2))
    {
        ans=i->first ;
 
        break ;
    }
}

cout<< ans <<"\n" ;

}

return 0;
}