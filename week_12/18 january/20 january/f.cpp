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
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='+')
            {
                cnt1++;
            }
            if(s[i]=='-')
            {
              cnt2++;
            }
        }
        cout<<abs(cnt1-cnt2)<<endl;
        
    
    }
    return 0;
}