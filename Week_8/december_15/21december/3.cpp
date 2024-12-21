#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        vector<int> v(n);
        int k = 0;
        for(int i=0;i<n;i++) 
        {
            cin>>v[i];
            k = k^v[i];
        }
        int ans =0;
        for(int i:v) {
            ans = ans^((i^k));
        }
        // cout<<ans<<endl;
        if(ans==0) cout<<k<<endl;
        else cout<<-1<<endl;
    }
    return 0;    
}