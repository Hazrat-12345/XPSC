#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    map<int, int> freq;  
    int l = 0, r = 0; 
    long long seg = 0; 
    while (r < n)
     {
      
        freq[a[r]]++;
        while (freq.size() > k)
         {
            freq[a[l]]--;
            if (freq[a[l]] == 0) 
            {
                freq.erase(a[l]);  
            }
            l++;
        }
        seg+= (r - l + 1);
        r++;
    }

    cout<<seg<<endl; 
    return 0;    
}