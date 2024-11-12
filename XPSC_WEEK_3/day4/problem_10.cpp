#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int n;
     cin>>n;
     vector<int> v;
     for(int i=1;i<=n;i++)
     {
        v.push_back(i);
     }
     vector<pair<int,int>> ans;
     for(int i=1;i<=n-1;i++)
     {
       auto it=v.end();
       it--;
       int a=*it;
       v.pop_back();
       it--;
       int b=*it;
       v.pop_back();
       ans.push_back({a,b});
       v.push_back((a+b+1)/2);
     }
     cout<<v[0]<<endl;
     for(auto it:ans)
     {
        cout<<it.first<<" "<<it.second<<endl;
     }
   }   
}