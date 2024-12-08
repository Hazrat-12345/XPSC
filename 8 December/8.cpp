#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) 
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), h(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        for (int i = 0; i < n; ++i) 
            cin >> h[i];

        int l = 0,r=0, max_len = 0; 
        long long cur_sum = 0; 
        while (r < n)
         {
            cur_sum += a[r]; 
           
            if (r > 0 && h[r - 1] % h[r] != 0) 
            {
                l = r; 
                cur_sum = a[r]; 
            }
            while (cur_sum > k) 
            {
                cur_sum -= a[l];
                l++;
            }
            max_len = max(max_len, r - l + 1);

            r++;
        }

        cout << max_len << endl;
    }

    return 0;
}
