#include <bits/stdc++.h>
using namespace std;
int main() 
{
   long long  int t;
    cin >> t;
    while (t--) 
    {
        long long int n, m, h;
        cin >> n >> m >> h;
        vector<long long int> a(n), b(m);
        for (int i = 0; i < n; i++)
         {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) 
        {
            cin >> b[i];
        }
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        long long sum = 0;  
        int i = 0, j = 0;
        while (i < n && j < m) 
        {
           
            long long sum2 = min(a[i],b[j] * h);
            sum += sum2;  
            i++;
            j++;
        }
        cout << sum << endl;
    }

    return 0;
}
