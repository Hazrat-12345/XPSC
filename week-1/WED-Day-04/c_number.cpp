#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a, b;
    cin >> a >> b;
    int ca = 2 * a - 1;
    int cb = 2 * b - 1;
    int cab = a + b;
    int mx_coins = max({ca, cb, cab});
    cout << mx_coins << endl;    
}