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
        vector<int> p(n);

        for (int i = 0; i < n; i++)
         {
            cin >> p[i];
        }

        int g = 0; 
        for (int i = 0; i < n; i++)
         {
            g = gcd(g, abs(p[i] - (i + 1)));
        }

        cout << g << endl; 
    }

    return 0;    
}