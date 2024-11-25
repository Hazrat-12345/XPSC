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
        long long  sum=0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            sum += abs(a[i]); 
        }
 
   
        int op = 0; 
        bool flag = false;
        for (int i = 0; i < n; i++) 
        {
            if (a[i] < 0)
             {
                if (!flag) 
                {
                 
                    op++;
                    flag = true;
                }
            } else if (a[i] > 0)
            {
              
                flag  = false;
            }
        }
 
        cout << sum << " " << op << endl;
    }   
}