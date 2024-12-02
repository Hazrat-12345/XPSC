#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long s;
    cin >> n >> s;

    vector<int> a(n);
    int i = 0;
    for(int i=0;i<n;i++) 
    {
        cin >> a[i];
    }

    long long sum = 0, ans = 0;
    int l = 0, r = 0;
    while (r < n)
     {
        sum += a[r];
        while (sum >= s) 
        {
            sum -= a[l]; 
            l++;
        }
        ans += (r - l + 1); 

        r++; 
    }

    cout << ans << '\n'; 
    return 0;
}
