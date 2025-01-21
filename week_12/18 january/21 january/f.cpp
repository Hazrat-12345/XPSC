#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;
 
        string s = "aeiou";
        string ans;
        int ind = 1, mul= 1;
 
        for (int i = 1; i <= n; i++)
         {
            int ch = (i - 1) % 5; 
            int pos = (ind * mul) - 1;
 
            ans.insert(pos, 1, s[ch]);
 
            if (i % 5 == 0) 
            {
                ind = 1;
                mul++;
            } 
            else 
            {
                ind++;
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}