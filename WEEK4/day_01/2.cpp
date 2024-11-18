#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int ans1=x%3;
        int ans2=y%3;
        int ans=min(ans1,ans2);
        cout<<ans<<endl;

    }

    return 0;
}
    
