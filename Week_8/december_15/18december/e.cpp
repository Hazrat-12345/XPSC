#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  t;
    cin >> t;

    while (t--) {
        long long int  n;
        cin >> n;
        long long int  arr[n];
        for ( int  i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }

        long long int  sum = 0, zero_count = 0;
        bool non_zero_found = false;

        for ( int  i = 0; i < n - 1; i++) 
        {
            if (arr[i] != 0) 
            {
                non_zero_found = true; 
            }
            if (non_zero_found) 
            {
                if (arr[i] == 0)
                 {
                    zero_count++; 
                }
                 else 
                 {
                    sum += arr[i];
                }
            }
        }

        sum += zero_count; 
        cout << sum << endl;
    }

    return 0;    
}