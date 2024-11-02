#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   vector<int> v(n);
   map<int,int>mp;
   for(int i=0;i<n;i++)
   {
    cin>>v[i];
    mp[v[i]]++;
   }
   int maximum=INT_MIN;
   for(auto [key,value]:mp)
   {
      maximum=max(maximum,value);
   }
   cout<<maximum<<endl;
  

    return 0;
}


