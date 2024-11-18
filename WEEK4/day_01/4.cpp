#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      long long int a,b,n,s;
      cin>>a>>b>>n>>s;
      if(((a*n)+b)<s)
      {
        cout<<"NO"<<endl;
      }
      else
      {
         long long int ans=s/n;
         long long int ans2=(ans*n);
         if((s-ans2)>b)
         {
            cout<<"NO"<<endl;
         }
         else
         {
            cout<<"YES"<<endl;
         }
      }
   }
}