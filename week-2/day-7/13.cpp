#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int n,m;
      cin>>n>>m;
      string s;
      cin>>s;
      set<int> st;
      for(int i=0;i<m;i++)
      {
        int x;
        cin>>x;
        st.insert(x);
      }
      string c;
      cin>>c;
      sort(c.begin(),c.end());
      int ind=0;
      for(auto val:st)
      {
        s[val-1]=c[ind];
         ind++;
      }
      cout<<s<<endl;

   }    
}