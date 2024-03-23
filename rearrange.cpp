#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    int t , n;
    cin >> t;
    while(t--)
    {
    cin >> n ;
    vector<int > arr(n) ;
    for(int i =0 ;i<n ;i++)
        arr[i] = i+1;
    int flag = true;
    int small =0 , large = n-1 ;
      for (int i = 0; i < n; i++) {
        if (flag)
            cout<< arr[large--];
        else
            cout<< arr[small++];
        cout<<" ";
        flag = !flag;
    }
    
}
}