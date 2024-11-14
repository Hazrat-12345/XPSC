#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            mp[v[i]]++;    
            mp[v[i] + 1];    
        }
        int last = 0;
        int res = 0;
        for (auto it = mp.begin(); it != mp.end(); ++it) 
        {
            int c = it->second;    
            res += max(0, c - last); 
            last = c;              
        }
        
        cout << res << endl;
    }
    return 0;
    
}