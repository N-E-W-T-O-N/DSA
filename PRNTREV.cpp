#include<iostream>
using namespace std;
void printr(int n)
{
    cout<<n <<" ";
    if(n<=0)
        return ;
    printr(n-5);
    cout<<n<<" ";    
}
int main()
{
    int n ;
    cin >> n; 
    int t=n;
    cout<<t<<" ";
    int flag =0; 
    do
    {
        if(t>0 && flag==0) t-=5 ;
        else {t+=5 ;flag=1;}
        cout<<t<<" "; 
    }while(t!=n);
    cout<<endl;
    printr(n);


}