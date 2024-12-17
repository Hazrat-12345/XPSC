#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
 {
    ll t;
    cin >> t;
    
    while (t--) 
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
         {
            cin >> v[i];
        }

        ll sum = 0;
        for (int i = 0; i < n - 2; i++) 
        {
            sum += v[i];
        }

        sum = v[n - 2] - sum;
        sum = v[n - 1] - sum;
        cout << sum << endl;
    }

    return 0;
}
