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
        int n=s.size();
        int a = -1;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                a = i;
              
            }
        }
        if (a == -1)
        {
            char add;
            for (char i = 'a'; i <= 'z'; i++)
            {
                if (s[n- 1] != i)
                {
                    add = i;
                    break;
                }
            }
            cout << s << add << endl;
        }
        else
        {
 
            char ans;
            for (char i = 'a'; i <= 'z'; i++)
            {
                if (s[a] != i)
                {
                    ans = i;
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {
                cout << s[i];
                if (i == a)
                {
                    cout << ans;
                }
            }
            cout << endl;
        }
    }
    return 0;    
}