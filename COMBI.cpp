#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> r)
{
    for(int i=0;i<r.size();i++)
        cout<<r[i]<<" ";
    cout<<endl;
}
void result(int i,int k,vector<int> a,vector<int> r)
{
    if(r.size()==k)
    {
    print(r);
    }
    else if (i==a.size()) return;

    else
    {
        //for(int i=t;i<n;i++)
        //{
            r.push_back(a[i]);
            result(i+1,k,a,r);

            r.pop_back();
            result(i+1,k,a,r);
        //}
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);

    for(int i=0;i<n;i++)
        cin>>a[i];
    
    vector<int> r;
    
    result(0,k,a,r); //index,Total,required,Array,Result
    
    return 0;
}