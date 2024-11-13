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
        
        vector<int> ar(n + 1);
        for (int i = 1; i <= n; i++) 
        {
            cin >> ar[i];
        }
        
        int left = 1, right = n;
        int min_val = 1, max_val = n;
        
        while (left <= right) 
        {
            if (ar[left] == min_val) 
            {
                left++;
                min_val++;
            }
            else if (ar[right] == max_val) 
            {
                right--;
                max_val--;
            }
            else if (ar[left] == max_val) 
            {
                left++;
                max_val--;
            }
            else if (ar[right] == min_val) 
            {
                right--;
                min_val++;
            }
            else {
                break;
            }
        }
        
        if (left > right) 
        {
            cout << -1 << endl;
        } else 
        {
            cout << left << " " << right << endl;
        }    
}
}

