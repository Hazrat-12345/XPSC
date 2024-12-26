#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        string s;
        cin >> n >> s;

        int mn = n + 1; 
        for (char c = 'a'; c <= 'z'; c++)
         {
            int l = 0, r= n - 1, cnt = 0;
            bool pos = true;
            
            while (l < r) {
                if (s[l] == s[r]) 
                {
                    l++;
                    r--;
                } 
                else if (s[l] == c) 
                {
                    cnt++;
                    l++;
                }
                 else if (s[r] == c) 
                {
                    cnt++;
                    r--;
                } 
                else 
                {
                    pos = false;
                    break;
                }
            }

            if (pos) 
            {
                mn = min(mn, cnt);
            }
        }

        if (mn == n + 1) 
        {
            cout << -1 << endl; 
        } 
        else 
        {
            cout << mn << endl; 
        }
    }

    return 0;    
}