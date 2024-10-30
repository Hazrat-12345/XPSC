#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    double t;
    cin >> a >> b >> t;
    int ans = int((t + 0.5) / a) * b;
    cout << ans << endl;    
}