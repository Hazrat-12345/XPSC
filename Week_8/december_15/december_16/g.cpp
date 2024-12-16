#include <bits/stdc++.h>
using namespace std;
int main() 
{

    int t;
    cin >> t;
    while (t--) 
    {
        int a;
        cin >> a;
        string s;
        cin >> s;

        string res = s;
        reverse(res.begin(), res.end());

        if (res >= s) 
        {
            cout << s << endl;
        } 
        else 
        {
            cout << res + s << endl;
        }
    }

    return 0;
}
