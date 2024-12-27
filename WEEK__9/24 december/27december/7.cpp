#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
  
 
int main()
{

 
    ll t;
   
    cin >> t;
    
    while (t--)
    {  
   string s;
   int n,q;
   cin>>n>>q;
   vector<ll> v(n),v1(q),vd;
   for (int i = 0; i < n; i++)
   {
       cin>>v[i];
   }
   for (int i = 0; i < q; i++)
   {
       cin>>v1[i];
   }
   map<int,int>mp;
 
   
   for (int i = 0; i < q; i++)
   {
    if(mp[v1[i]]==1)continue;
       for (int j = 0; j < n; j++)
       {
           if(v[j]%(1<<v1[i])==0)
            v[j]+=(1<<v1[i]-1);
       }
       mp[v1[i]]=1;
   }
   for (int i = 0; i < n; ++i)
   {
       cout<<v[i]<<" ";
   }
   cout<<endl;
 
 }
    
    return 0;
}