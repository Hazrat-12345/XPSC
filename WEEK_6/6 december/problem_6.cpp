#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long k;
    cin >> n >> k; 
    long long a[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    multiset<long long> win;  
    int l = 0, r = 0; 
    long long seg = 0; 
    while (r < n)
     {
        win.insert(a[r]);
        while (*win.rbegin() - *win.begin() > k) 
        {
            win.erase(win.find(a[l])); 
            l++;
        }
        seg += (r - l + 1);

        r++;
    }
    cout << seg << endl;  
    return 0;    
}