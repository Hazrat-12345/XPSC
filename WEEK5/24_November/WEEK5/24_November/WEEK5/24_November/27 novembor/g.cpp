#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        int l;
        cin >> l;
        string s1, result = "";
        cin >> s1;
        for (int i = l - 1; i >= 0; )
        {
            if (s1[i] == '0') {
                int val = (s1[i - 2] - '0') * 10 + (s1[i - 1] - '0');
                result += ('a' + val - 1);
                i -= 3;
            } 
            else 
            {
                result += ('a' + (s1[i] - '0' - 1));
                i--;
            }
        }
        reverse(result.begin(), result.end());
        cout << result << "\n";
    }
    return 0;    
}