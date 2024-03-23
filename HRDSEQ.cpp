#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
    int  n ;
    cin >> n ;
    int arr[n+1] ;
    vector<int>visit(n,-1) ;
    
    
    arr[1] = 0 ;
   
    for(int i=2 ;i<=n;i++)
    {
        if(visit[arr[i-1]]==-1)  // not repeted
            {
                arr[i]=0;
                
            }
        else
            {
                arr[i]=(i-1) - visit[arr[i-1]] ;
               
            }
            visit[arr[i-1]] = i-1 ;
    }
    //int i=0;
    /*for(auto x:arr)
    {
        if(i==0) {i++ ; continue;}

        cout<<x<<" " ;
    }
    */
    int count = 0;
    for(int i=1 ;i<=n ;i++)
    {
        if(arr[i]==arr[n])
            count++ ;
    }
    cout<<count<<endl;
    }

}