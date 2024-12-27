#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t; 
    while(t--) 
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++) 
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int x = -1;
        for(int i = 0; i <= n; i++) 
        {
            if(mp[i] == 0) 
            {
                x = i;
                break;
            }
        }
        v.push_back(x);
        if(k > n + 1) 
        {
            k = k % (n + 1);
        }
        int cnt = 0;
        for(int i = v.size() - k; i < v.size(); i++) 
        {
            cout << v[i] << " ";
            cnt++;
            if(cnt == n) break;
        }
        for(int i = 0; i < n; i++) 
        {
            if(cnt == n) break;
            cout << v[i] << " ";
            cnt++;
        }
        cout << endl;
    }
    return 0;    
}