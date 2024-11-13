#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
 
   while(t--){
   
   int n;
   cin>>n;
 
   vector<int >arr(n);
   map<int, bool> mp;
 
   for(int i=0;i<n;i++) 
    cin>>arr[i];
   
  bool x=false;
 
   for(int i=n-1;i>=0;i--){
 
      if(mp[arr[i]]==1){
        cout<<i+1<<endl;
        x=true;
        break;
      }
 
      mp[arr[i]]=1;
 
   }
 
  if(x==false) cout<<"0"<<endl;
 
 
   }
    return 0;    
}