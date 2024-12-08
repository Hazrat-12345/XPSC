#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t; 

    while (t--) 
    {
        int n, k;
        cin >> n >> k;

        vector<int> ar(n);
        int total = 0;
        for (int i = 0; i < n; i++) 
        {
            cin >> ar[i];
            total += ar[i];
        }

        if (total < k) 
        {
            cout << -1 << endl;
            continue;
        }

        int l= 0, r = 0, current = 0, mx = 0;

        while (r < n) 
        {
            current += ar[r]; 
            while (current > k) 
            {
                current -= ar[l];
                l++;
            }
            mx = max(mx, r - l + 1); 
            r++;
        }
        
        cout << n - mx << endl;
    }

    return 0;    
}
