#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t ;
    cin >> t ;
    while(t--)
    {
      int n ;
      cin >> n ;
      vector<int> arr(n) ;
      for(int i= 0 ;i<n ;i++)
        cin >>arr[i] ;
      int flag = 0;//all are same   
      if(arr[0]>arr[1])
      {
	  cout<<0<<" ";
      flag=1;
  	  }
      for(int i=1 ;i<n-1 ;i++)
      {
        if((arr[i]>arr[i-1]) && (arr[i]>arr[i+1]))
        cout<<i<<" ";
        if(flag)
        	flag=1;
      }
      if(arr[n-1]>arr[n-2])
       {
		 cout<<n-1;
        flag=1;
  	   }
  	   if(!flag)
  	   	cout<<-1 ;
        cout<<"\n";
    }
    return 0;
  }
