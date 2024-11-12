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
     int a[n];
     set<int> s;
     
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
        s.insert(a[i]);
     }
     auto it=s.begin();
       if(s.size()==1 )
       {
        cout<<"YES"<<endl;
       }
       else if(*it==0 && s.size()==2)
       {
        cout<<"YES"<<endl;
       }
       else 
       {
        cout<<"NO"<<endl;
       }
   }
   }    
