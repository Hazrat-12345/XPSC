#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) 
    {    
        long long t, a, b,n, x;
        long long ans=0;
        cin >> a >> b >> n;
        long long sum = b;  
        for (int i = 0; i < n; i++)
         {
            cin >> x;
            if (x < a) 
            {
                sum += x;  
            }
            else
             {
                ans++;
            }
        }
        cout << sum + (a-1) *ans  << endl;  
    }    
}