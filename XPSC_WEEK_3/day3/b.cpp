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
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int op1 = v[n - 1] - v[2];     
        int op2 = v[n - 3] - v[0];
        int op3 = v[n - 2] - v[1];          
        int ans = min({op1, op2,op3});
        cout << ans << endl;
    }
    return 0;    
}
