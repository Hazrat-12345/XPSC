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

        vector<long long> sum(n + 1, 0);
        for (int i = 1; i <= n; i++) 
        {
            int val;
            cin >> val;
            sum[i] = sum[i - 1] + val; 
        }
        
        string d;
        cin >> d;

        long long result = 0; 
        int l = 0, r = n - 1; 
        
        while (r > l)
         {
            while (l < n && d[l] == 'R') 
            {
                l++;
            }
            while (r >= 0 && d[r] == 'L') 
            {
                r--;
            }
            if (l < r)
             {
                result += sum[r + 1] - sum[l];
                l++;
                r--;
            }
        }   
        cout << result << endl;
    }
    return 0;
}
