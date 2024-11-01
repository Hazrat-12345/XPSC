#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   map<string,int> mp;
   vector<string> v;
   for(int i=1;i<=n;i++)
   {
    string name;
    cin>>name;
     v.push_back(name);

   } 
 for(int i=n-1;i>=0;i--)
 {
   if(mp[v[i]]==0)
   {
    cout<<v[i]<<endl; 
   }
   mp[v[i]]++;
 } 
}


