#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;  
    while (t--) 
    {
        long long int n, k, q;
        cin >> n >> k >> q;  
        vector<long long int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i]; 
        }
        
       long long  int count = 0;
        long long int l = 0, r = 0;
        
        while (r < n) 
        {
         
            if (a[r] > q) 
            {
                l = r + 1;  
            }
            if (r - l + 1 >= k) 
            {
                count += (r - l + 1 - k + 1);
            }
            
            r++;  
        }
        
        cout << count << endl;
    }    
}