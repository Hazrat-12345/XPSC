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
        if (s == "()")
        {
            cout << "NO" << endl;
            continue;
        }
        int n = s.size();
        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
 
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << "()";
            }
            cout << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
                cout << "(";
            for (int i = 0; i < n; i++)
                cout << ")";
            cout << endl;
        }
    }
    return 0;    
}