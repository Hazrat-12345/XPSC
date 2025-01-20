#include<bits/stdc++.h>
using namespace std;
#define ll long long
int32_t main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        map<int,int> mp;
        for(int i=1;i<=n;i++)
        {
            int x;cin>>x;
            mp[x]++;
        }
        int ans=0;
        for(auto [key,val]:mp)
        {
            ans+=val/3;

        }
        cout<<ans<<endl;
    }
    return 0;
}