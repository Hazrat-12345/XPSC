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
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                if (s[i] == 'b')
                {
                    if (!v1.empty())
                        v1.pop_back();
                }
                else
                {
                    v1.push_back(i);
                }
            }
            else
            {
                if (s[i] == 'B')
                {
                    if (!v2.empty())
                        v2.pop_back();
                }
                else
                {
                    v2.push_back(i);
                }
            }
        }
        vector<int> v;
        for (int i = 0; i < v1.size(); i++)
        {
            v.push_back(v1[i]);
        }
        for (int i = 0; i < v2.size(); i++)
        {
            v.push_back(v2[i]);
        }
        sort(v.begin(), v.end());
        for (auto u : v)
        {
            cout << s[u];
        }
        cout << endl;
    }
    return 0;    
}