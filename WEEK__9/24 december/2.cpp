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
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        int mn = INT_MAX;

        for (int i = 0; i < n; i++) 
        {
            int mx = 0; 
            if (i > 0) 
            {
                mx = max(mx, abs(a[i] - a[i - 1]));
            }
            if (i < n - 1) 
            {
                mx = max(mx, abs(a[i] - a[i + 1]));
            }
            mn = min(mn, mx);
        }
        cout << mn << "\n";
    }

    return 0;    
}