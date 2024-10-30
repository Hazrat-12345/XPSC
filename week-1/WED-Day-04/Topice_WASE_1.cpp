#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int count1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
               count1=i;
               break;
            }
        }
        int count2=0;
       for(int i=s.size();i>=0;i--)
       {
        if(s[i]=='B')
        {
          count2=i;
          break;
        }
       }
 
       int ans=(count2-count1+1);
       cout<<ans<<endl;
    }
return 0;    
}