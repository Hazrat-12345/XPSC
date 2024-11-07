#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int> mp;
        for(int i=0;i<n;i++)
        {
           mp[s[i]]++; 
        }
        int ans=0;
        for(auto val:mp)
        {
           if(val.second%2!=0)
           {
              ans++;
           }
        }
        if(ans-1==0) ans=0;
        else ans=ans-1;

        if(k>=ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}