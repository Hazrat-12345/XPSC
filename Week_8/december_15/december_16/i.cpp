#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{

    ll t;
    cin >> t;

    while (t--) 
    {
        ll n, jor = 0, bjor = 0, bmx = 0;
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        cin >> n;
        ll ar[n];

        for (ll i = 0; i < n; i++) 
        {
            cin >> ar[i];
            jor += (ar[i] % 2 == 0); 
            bjor += (ar[i] % 2);    
            if (ar[i] % 2)           
                bmx = max(bmx, ar[i]);
            else                    
                pq.push(ar[i]);
        }

        if (jor == 0 || bjor == 0)
         {
            cout << 0 << "\n";
            continue;
        }

        sort(ar, ar + n); 

        if (ar[n - 1] % 2)
         { 
            cout << jor << "\n";
        }
         else 
         {
            ll sum = bmx;
            while (!pq.empty())
             {
                if (sum > pq.top()) 
                { 
                    sum += pq.top();
                    pq.pop();
                } 
                else 
                {
                    jor++;
                    break;
                }
            }
            cout << jor << "\n";
        }
    }

    return 0;
}
