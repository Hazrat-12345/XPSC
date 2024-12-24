#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++) 
        {
            cin>>v[i].first;
        }
        for(int i=0;i<n;i++) 
        {
            cin>>v[i].second;
        }
        int mx = 0;
        for(auto it:v) 
        {
            mx = max(mx,abs(it.first-it.second));
        }
        bool flag = true;
        for(auto it:v)
         {
            if(it.first-mx == it.second)
             {
 
            }
            else if(it.first-mx <0 && it.second==0)
             {
 
            }
            else 
            {
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;    
}