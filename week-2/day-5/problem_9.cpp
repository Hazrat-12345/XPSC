#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      long long int n;
      cin>>n;
      vector<long long int> v(n);
      for(int i=0;i<v.size();i++)
      {
        cin>>v[i];
      }
      priority_queue<long long int> pq;
      long long int ans=0;
      for(int i=0;i<v.size();i++)
      {
         if(v[i]==0)
         {
            if(pq.empty())
            {
                continue;
            }
            else
            {
                ans+=pq.top();
                pq.pop();
            }

         }
         else
         {
            pq.push(v[i]);
         }
      }
      cout<<ans<<endl;
   }    
}