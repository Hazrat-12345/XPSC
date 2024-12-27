#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) 
    {
        long long n; 
        cin >> n;
        vector<long long> v(n); 
        map<long long, long long> mp;  
        map<long long, long long> mp1; 
        map<long long, long long> mp2; 
        for(long long i = 0; i < n; i++) 
        {
            cin >> v[i];
            mp[v[i]]++;
            mp1[v[i]]++;
            mp2[v[i]]++;
        }
        vector<long long> pre(n); 
        vector<long long> suf(n); 
        for(long long i = n - 1; i >= 0; i--) 
        {
            if(v[i] == 1) mp1[1]--;
            pre[i] = mp1[1];
        }
        for(long long i = 0; i < n; i++) 
        {
            if(v[i] == 0) mp2[0]--;
            suf[i] = mp2[0];
        }
 
        long long cnt = 0; 
        for(long long i = 0; i < n; i++) 
        {
            if(v[i] == 1) {
                if(mp[0] > 0) cnt += mp[0];
            }
            else mp[0]--;
        }
        long long mx = cnt; 
        for(long long i = 0; i < n; i++) 
        {
            if(v[i] == 0) {
                long long sum = cnt; 
                sum -= pre[i];
                sum += suf[i];
                mx = max(mx, sum);
            }
            else {
                long long sum = cnt; 
                sum -= suf[i];
                sum += pre[i];
                mx = max(mx, sum);
            }
        }
        cout << mx << endl;
    }
    return 0;
}
