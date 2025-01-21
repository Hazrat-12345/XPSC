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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int sum=0;
        for(int i=n-1;i>=1;i--)
        {
           sum+=a[i]-a[i-1];
        }
        cout<<sum<<endl;
    }
    return 0;
}