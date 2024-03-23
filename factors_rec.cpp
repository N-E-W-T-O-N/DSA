#include<iostream>
#include<vector>
using namespace std ;

void factor(int n ,int p,vector<int> s)
{
    if(n==1)
    {   
        for(auto x:s)
        cout<<x<<" ";
        cout<<endl;
    }
    else
    {
        for(int i=p ;i<=n;i++)
        {
            if(n%i==0) //current value
            {
                s.push_back(i) ;
                factor(n/i , i ,s) ;
                s.pop_back();
            }
        }
    }    
}
int main()
{
    //print all factors of a number 

    int n=12;
    cout<<"Possible Factorials of "<<n<<endl;
    vector<int> s ={1};
     

    factor(n,2,s);

} 