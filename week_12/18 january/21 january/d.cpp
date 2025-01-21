#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, s, m;
        cin >> n >> s >> m;
 
        int l[n], r[n];
        for (int i = 0; i < n; i++) 
        {
            cin >> l[i] >> r[i];
        }
 
        bool ans = false;
        if (n == 0 || l[0] >= s) 
        {
            ans = true;
        }
        for (int i = 1; i < n; i++) 
        {
            if (l[i] - r[i - 1] >= s) 
            {
                ans = true;
            }
        }
        if (n == 0 || m - r[n - 1] >= s) 
        {
            ans = true;
        }
       if(ans) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
 
    return 0;
}