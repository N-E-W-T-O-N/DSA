#include <bits/stdc++.h>
  using namespace std;
  
bool isvowel(char c)
{
  if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    return true ;
  else 
    return false ;
}
int main()
  {
    //write your code here
    int t ;
    cin >> t ;
    while(t--)
    {
      string s ;
      cin>> s ;
      
      int n = s.size(),flag = 0 ; //If change not changed
      if(n == 1)
      {
      	if(!(isvowel(s[0]) || s[0]=='n'))
      		flag = 1;
	  }
      else 
	  {
	  for(int i= 0 ;i <n-1 ;i++)
      {
      	  if(s[i]=='n') continue ;
      	  cout<<i<<" "<<(i+1);
      	  //cout<<isvowel(s[i])<<" "<<isvowel(s[i+1]);
          if(isvowel(s[i]) == false && isvowel(s[i+1]) == false )
            {flag = 1 ; break ;}
               
      }
      //if(!(isvowel(n-1) || s[n-1]=='n'))
      //		flag = 1;
  	  }

      if(flag==0) cout<<"YES"<<endl;
      else cout<<"NO"<<endl ;
    }
    return 0;
}
