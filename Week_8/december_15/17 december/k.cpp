#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        vector<long long int> v(n);
        long long int ar[m + 1];
        for (int i = 1; i <= m; i++)
            cin >> ar[i];
        int j = n - 1;
        if (n == 1 || m == 1)
        {
            cout << "Yes" << endl;
            continue;
        }
        for (int i = m; i > 1; i--)
        {
            int x = ar[i] - ar[i - 1];
            v[j] = x;
            j--;
        }
        while (j > 0)
        {
            v[j] = v[j + 1];
            ar[1] -= v[j];
            j--;
        }
        v[0] = ar[1];
        bool sorted = true;
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
            {
                sorted = false;
                break;
            }
        }

        if (sorted)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
