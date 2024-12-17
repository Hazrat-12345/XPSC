#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
 {
    ll t;
    cin >> t;

    while (t--)
     {
        ll n;
        cin >> n;
        vector<ll> v(n);
        map<ll, ll> mp;

        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        ll mx = 0, rem = 0, steps = 0;
     
        for (auto u : mp)
         {
            mx = max(mx, u.second);
        }

        rem = n - mx; 
        ll copy = 0, element= mx;

        while (rem > 0) 
        {
            copy++;
            steps += min(element, rem);
            rem -= element; 
            element*= 2; 
        }

        cout << copy + steps << endl;
    }

    return 0;
}
