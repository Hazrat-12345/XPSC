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
        vector<vector<int>> ar(n, vector<int>(n - 1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> ar[i][j];
            }
        }
 
        map<int, int> mp;
        long long int num;
        for (int i = 0; i < n; i++)
        {
            mp[ar[i][0]]++;
 
            if (mp[ar[i][0]] == n - 1)
            {
                num = ar[i][0];
                break; 
            }
        }
 
        map<int, int> mp2;
        vector<int> ans;
        ans.push_back(num);
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ar[j][i] != num && mp2[ar[j][i]] == 0)
                {
                    mp2[ar[j][i]] = 1;
                    ans.push_back(ar[j][i]);
                }
            }
        }
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
    }
 
    return 0; 
}