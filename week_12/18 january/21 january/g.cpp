#include<bits/stdc++.h>
using namespace std;
#define ll long long
int32_t main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
     ll t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool isValid = true;
        for (ll i = 0; i < n; i++) 
        {
            if (a[i] == b[i]) 
            {
                continue;
            } 
            else if ((a[i] + 1) == b[i]) 
            {
                continue;
            }
             else
              {
                cout << "NO" << endl;
                isValid = false;
                break;
            }
        }

        if (isValid)
         {
            cout << "YES" << endl;
        }
    }
    return 0;
}