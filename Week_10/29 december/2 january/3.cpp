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
        map<int, int> pos;
        for (int i = 1;i <= n;i++)
        {
            int in;
            cin >> in;
            pos[in] = i;
        }
        int cnt = 0;
        for (auto value : pos)
        {
            int cur, pos;
            cur = value.second;
            pos = value.first;
            if (abs(cur - pos) % k != 0)
                cnt++;
        }
        if (cnt == 0)
            cout << 0 << '\n';
        else if (cnt == 2)
            cout << 1 << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;    
}