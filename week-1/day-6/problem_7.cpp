#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<string,int> mp;
   int n;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
     string name;
     cin>>name;
     if(mp[name]==0)
     {
        cout<<"OK"<<endl;
     }
     else
     {
       cout<<name<<mp[name]<<endl;
     }
     mp[name]++;
   }
}
