#include <bits/stdc++.h>
using namespace std;

int main()
{


    long long int  t;
    cin >> t;

    while (t--)
    {
        long long int  n, sum = 0, count = 0, ok = 1, mx = 0;
        cin >> n;
        for ( int  i = 0; i < n; i++)
        {
            long long int  x;
            cin >> x;
            if (x > mx)
            {
                sum += mx;
                mx = x;
            }
            else
                sum += x;

            if (mx == sum)
            {
                count++;
                ok = 1;
            }
            else if (x == 0 && ok)
                count++;
            else
                ok = 0;
        }
        cout << count <<endl;
    }
    return 0;
}
