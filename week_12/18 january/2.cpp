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
        int n;
        cin>>n;
        string s;cin>>s;
        bool ans=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.')
            {
               ans=true;
               break;
            }
            if(s[i]=='.')
            {
                cnt++;
            }
        }
        if(ans==true) cout<<"2"<<endl;
        else cout<<cnt<<endl;
    }
    return 0;
}