#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--)
     {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        s=s+s;
        vector<int> pos;
        for (int i = 0; i < s.size(); i++) 
        {
            if (s[i] == 'g') 
            {
                pos.push_back(i);
            }
        }
 
        int max_wait = 0;
        for (int i = 0; i < n; i++) 
        {
            if (s[i] == c) 
            {
                auto it = lower_bound(pos.begin(), pos.end(), i);
                
                if (it != pos.end())
                 {
                    int wait_time = *it - i;
                    max_wait = max(max_wait, wait_time);
                }
            }
        }
 
        cout << max_wait << endl;
    }
 
    return 0;
}