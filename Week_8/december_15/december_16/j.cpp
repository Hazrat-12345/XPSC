#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        map<char, ll> freq; 
        for (int i = 0; i < n; i++) 
        {
            freq[s[i]]++;
        }

        vector<pair<ll, char>> chars;
        for (auto x : freq) 
        {
            chars.push_back({x.second, x.first});
        }

        sort(chars.rbegin(), chars.rend());  

        string ans(n, '$');
        int ind = 0;
        for (auto x : chars) 
        {
            int t = x.first;
            char c = x.second;
            while (t--) 
            {
                if (ind >= n) ind = 1;
                ans[ind] = c;
                ind += 2;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
