#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
     {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l = 0, r = 0;
        int current_white = 0;
        int min_white = n; 
        while (r < n) 
        {
            if (s[r] == 'W')
            {
                current_white++; 
            }
            if (r - l + 1 == k) 
            {
                min_white = min(min_white, current_white); 
                if (s[l] == 'W') 
                {
                    current_white--;
                }
                l++;
            }
            r++;
        }
 
        cout << min_white << endl;
    }    
}