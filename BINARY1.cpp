#include<iostream>
#include<vector>
using namespace std ;

void p(int count ,int n,vector<int> b)
{
    if(count==n)
    {
        for(auto x:b)
        cout<<x;
        cout<<endl;
        return;
    }
    if(count==0)
    {
        b.push_back(0);
        p(count+1,n,b);
        b.pop_back();

        b.push_back(1);
        p(count+1,n,b);
        b.pop_back();
    }
    else if(b.back()==0)
    {


    b.push_back(0) ;
    p(count+1,n,b);
    b.pop_back() ;

    b.push_back(1) ;
    p(count+1,n,b);
    b.pop_back() ;


    }
    else
    {
    b.push_back(0) ;
    p(count+1,n,b);
    b.pop_back() ;
    }

}

int main()
{
    int n;
    cin>>n;
    vector<int>b;
    p(0,n,b);
}