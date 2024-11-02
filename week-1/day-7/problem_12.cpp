#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str, save;
        cin >> str;
        save = str;
        sort(str.begin(), str.end());
        map<char, char> mp;
        vector<char> v;
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] != str[i + 1])
                v.push_back(str[i]);
        }
        v.push_back(str[n - 1]);
        for (int i = 0; i < v.size(); i++)
        {
            mp[v[i]] = v[v.size() - i - 1];
        }
        for (int i = 0; i < n; i++)
        {
            cout << mp[save[i]];
        }
        cout << endl;
    }    
}
