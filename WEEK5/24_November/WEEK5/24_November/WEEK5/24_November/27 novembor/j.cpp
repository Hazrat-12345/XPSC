#include<bits/stdc++.h>
using namespace std;
int main()
{
  
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();

        int m = abs(s[0] - s[n - 1]);
        char mn = min(s[0], s[n - 1]);
        char mx = max(s[0], s[n - 1]);
        
        vector<pair<char, int>> pos;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= mn && s[i] <= mx)
            {
                pos.push_back({s[i], i + 1});
            }
        }
        vector<int> res;
        if (s[0] <= s[n - 1])
        {
     
            for (char c = mn; c <= mx; c++)
            {
                for (auto p : pos)
                {
                    if (p.first == c)
                    {
                        res.push_back(p.second);
                    }
                }
            }
        }
        else
        {
          
            for (char c = mx; c >= mn; c--)
            {
                for (auto p : pos)
                {
                    if (p.first == c)
                    {
                        res.push_back(p.second);
                    }
                }
            }
        }

        cout << m << " " << res.size() << endl;
        for (auto  idx : res)
        {
            cout << idx << " ";
        }
        cout << endl;
    }

    return 0;    
}