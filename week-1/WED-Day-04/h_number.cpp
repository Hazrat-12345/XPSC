#include <bits/stdc++.h>
using namespace std;

int main()
 {
    int n;
    cin >> n;
    vector<long long> v(n);
    long long sum = 0;
    long long  min_odd = LLONG_MAX;
    for(int i = 0; i < n; i++) 
    {
        cin >> v[i];
        sum += v[i];
        if(v[i] % 2 != 0) 
        {
            min_odd = min(min_odd, v[i]);
        }
    }
    if(sum % 2 == 0) 
    {
        cout << sum << endl;
    } 
    else 
    {
        cout << sum - min_odd << endl;
    }

    return 0;
}
