#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    long n ;
    cin >> n ;
    int x ;
    map<int ,vector<int> > m ;
    for(int i = 0 ; i < n ;i++)
    {
      cin >>x;
      m[ x ].push_back(i) ;
    }
    /*for(auto &x:m)
    {
        cout<<x.first <<" -> ";
        for(auto y:x.second)
            cout<<y<<" ";
            cout<<endl ;
    }
    */
    for(auto &x:m)
    {
        if(x.second.size()==1)
        {
            cout<<x.first<<" "<<0 ;
        }
        else
        {
            vector <int> y=x.second ;
            int d = y[1]-y[0];
            bool test = true ;
            for(int i=2 ;i<y.size()-1; i++)
            {
                if(d!=(y[i]-y[i-1]))
                {test = false ;    break ;}
                
            }
            if(test == true)
            {
                cout<<x.first<<" "<<d ;
            }
         //   cout<<y<<" ";
        }
            cout<<endl ;
    }
    return 0;
  }