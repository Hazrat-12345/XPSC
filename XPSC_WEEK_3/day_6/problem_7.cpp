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
        for (int i = 0; i < n; i++)
         {
            cin >> v[i];
        }    
        string s;
        cin >> s;
        vector<int> s1, s0;
        for (int i = 0; i < n; i++) 
        {
            if (s[i] == '1') 
                s1.push_back(v[i]);
            else 
                s0.push_back(v[i]);
        }
        sort(s0.rbegin(), s0.rend()); 
        sort(s1.rbegin(), s1.rend()); 
        int end = n;
        for (int x : s1) {
            if (mp.find(x) == mp.end())
             {  
                mp[x] = end--;
            }
        }
        for (int x : s0) 
        {
            if (mp.find(x) == mp.end())
             { 
                mp[x] = end--;
            }
        }
        for (int i = 0; i < n; i++) 
        {
            cout << mp[v[i]] << " ";
        }
        cout << endl;
    }
    return 0;
}
