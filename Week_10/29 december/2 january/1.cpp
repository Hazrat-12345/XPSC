#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long  t;
    cin >> t;
    while(t--)
    {
        long long  n;
        cin >> n;
        vector<long long > vp(n);
        for (long long  i = 0; i < n; i++)
        {
            cin >> vp[i];
        }
        sort(vp.begin(), vp.end(), greater());
        cout << vp[(n - 1) / 2] << "\n";
    }
    return 0;    
}