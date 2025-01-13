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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
         {
            cin >> a[i]; 
        }
        vector<int> v = a;
        sort(a.begin(), a.end());
 
        bool ans = false;
        for (int i = 0; i < n; i++) 
        {
            bool ans2 = true;
            for (int j = 0; j < n; j++) 
            {
                if (v[(i + j) % n] != a[j]) 
                {
                    ans2 = false;
                    break;
                }
            }
            if (ans2) 
            {
                ans = true;
                break;
            }
        }
 
 
        if (ans)
         {
            cout << "Yes" << endl;
        }
         else 
         {
            cout << "No" << endl;
        }
    }
 
    return 0;     
}