#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s,t;
  cin>>s>>t;
  int j=s.size();
  int k=t.size();
  int cnt=0;
  if(j==k)
  {
     for(int i=0;i<s.size();i++)
     {
        if(s[i]!=t[i])
        {
          cnt++;
        }
     } 
  } 
  cout<<cnt<<endl;   
}