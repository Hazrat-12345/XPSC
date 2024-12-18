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
        map<int, int> mp;
        set<int> st;
 
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            st.insert(v[i]);
        }
        int L = -1, R = -1;
 
        vector<int> d(st.begin(), st.end());
 
        int cnt = 0;
        int ans = 0;
 
        for (int i = 0; i < d.size(); i++)
        {
            if (mp[d[i]] < k)
            {
                cnt = 0;
            }
            else
            {
                if (i == 0 || d[i] - d[i - 1] == 1)
                {
                    cnt++;
                }
                else
                {
                    cnt = 1;
                }
 
                if (ans < cnt)
                {
                    ans = cnt;
                    L = d[i - cnt + 1];
                    R = d[i];
                }
            }
        }
        if (L == -1)
            cout << -1 << endl;
        else
            cout << L << " " << R << endl;
    }
    return 0;    
}