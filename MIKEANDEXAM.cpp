#include<bits/stdc++.h>
using namespace std ;

bool check(vector<int> a ,int k)
{
    int sum =0 ;
    for(auto x:a)   sum+= x ;
    bool t=((k==sum)?true:false) ;
    //cout<<sum<<endl;
    return t;
}
void print(vector<int> r)
{
for(int i=0 ;i<r.size();i++)
    cout<<r[i]<<" ";
    cout<<endl;
}
/*
void result(int t,int n,int k,vector<int> a,vector<int>  r,int &count)
{
    if(check(r,k)){count=count + 1 ;}
    if(t==n)
        {//print(r);return;
        return ;
        }
    else
    {    
    for(int i=t;i<n;i++)
    {
        r.push_back(a[i]) ;
        //if(check(r,k)){print(r) ;count=count + 1 ;}
        //cout<<a[i]<<" ";
        result(i+1,n,k,a,r,count) ;
        r.pop_back() ;


        r.push_back(-a[i]) ;
        //cout<<-a[i]<<" ";
        
        result(i+1,n,k,a,r,count) ;
        r.pop_back() ;
       
    }
    }
}
*/

int countWays( vector<int> &a, int n, int k) {
    //int dp[n+1][k+1];
    vector<vector<int>> dp(n+1,vector<int>(k+1,0));
    //memset(dp, 0, sizeof(dp));

    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            if (j >= a[i-1])
                dp[i][j] = dp[i-1][j-a[i-1]] + dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    for(int i=0 ;i<=n;i++)
    {
        vector<int> x;
        for(int j=0 ;j<=k;j++)
        {
            //x.push_back(dp[i][j]) ;
            cout<<dp[i][j]<<" ";
        }
        //d.push_back(x);
        cout<<endl;
    }
    return dp[n][k];
}
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
 
    static int count=0 ;
    int n , k ;
    cin>>n>>k;
    vector<int> a(n) ;
    for(int i=0 ;i<n;i++) cin>>a[i] ;


    sort(a.begin(),a.end());
 /*   for(auto x:a)
    cout<<x<<" ";
    cout<<endl;
*/
vector<int> r ;
//cout<<a.size();
//result(0,n,k,a,r,count) ;  // using recursion 
//vector<vector<int>> d;
cout << countWays(a, n, k) << endl;  // using dynamic programing
cout<<count<<endl;


    }

}