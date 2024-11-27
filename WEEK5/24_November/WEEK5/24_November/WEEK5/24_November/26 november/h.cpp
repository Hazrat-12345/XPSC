#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t; 
    while (t--) 
    {
        int n, c;
        cin >> n >> c;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> v[i];  
        }
        vector<int> v1(n);
        
        for (int i = 0; i < n; ++i)
         {
            v1[i] = i + 1 + v[i]; 
        }
        sort(v1.begin(), v1.end());
        int cnt = 0;
        for (int i = 0; i < n; ++i) 
        {
            if (c >= v1[i]) 
            {
                c -= v1[i];  
                cnt++; 
            } 
            else 
            {
                break;  
            }
        }

        cout << cnt << endl;  
    }

    return 0;    
}