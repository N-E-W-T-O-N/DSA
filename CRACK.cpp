#include<iostream>
#include<vector>
using namespace std;

void pass(int n, vector<int> a)
{
    if(n == 0) 
    {
        for(auto x: a) cout << x;
        cout << endl;
    }
    else
    {
        for(int i = 0; i <= 9; i++)
        {
            a.push_back(i);
            pass(n-1, a);
            a.pop_back();
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        pass(n, a);
    }
    return 0;
}



/*
void pass_(int n) //iterative method
{
    
for(int i=pow(10,(n-1))+1 ;i<pow(10,n);i++)
    cout<<i<<endl;
}
*/