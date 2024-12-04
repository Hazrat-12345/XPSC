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
        int l = 2, r = 3 * n; 
        vector<pair<int, int>> ans;
        while (l < r)
         {
            ans.push_back({l, r});
            l += 3;
            r -= 3;
        }
 
        cout << ans.size() << endl;
        for (auto i : ans) {
            cout << i.first << " " << i.second << endl;
        }
    }
    return 0;    
}