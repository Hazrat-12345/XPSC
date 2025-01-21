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
        int n,k;
        cin>>n>>k;
        vector<int> v(k);
        for(int i=0;i<k;i++) 
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int cnt = 0;
        int ele=0;
        for(int i=0;i<k-1;i++)
         {
            if(v[i]>1)
             {
                cnt +=v[i]-1;
            }
            ele +=v[i];
        }
        cout<<cnt+ele<<endl;
    }
    return 0;
}