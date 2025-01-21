#include<bits/stdc++.h>
using namespace std;
#define ll long long
int32_t main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    
     long long  t;
    cin >> t;
    while(t--)
    {
        long long  n;
        cin >> n;
        vector<long long > vp(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vp[i];
        }
        sort(vp.rbegin(),vp.rend());
        cout << vp[(n - 1) / 2] <<endl;
    }
    return 0;
}