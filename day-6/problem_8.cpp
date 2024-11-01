#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   map<string,string>mp;
   for(int i=1;i<=n;i++)
   {
    string s,r;
    cin>>s>>r;
    r = r + ";";
    mp[r]=s;
   }
   for(int i=1;i<=m;i++)
   {
    string s,r;
    cin>>s>>r;
    
        cout<<s<<" "<<r<<" "<<"#"<<mp[r]<<endl;
      
   }
      
   
}