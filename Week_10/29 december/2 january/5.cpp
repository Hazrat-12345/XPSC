#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t; cin >> t;
    while (t--) 
    {
        long long  n; 
        cin >> n;
        long long  ans = 1;
        long long  c = 1;
        while (1) 
        {
            if (c >= n) break;
            ans++;
            c = c * 2 + 2;
        }
        cout << ans << endl;
    }
    return 0;    
}