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
        int a = (n * (n - 1)) / 2;
        vector<int> v(a), ans;
         ans.push_back(1000000000);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }
 
        sort(v.begin(), v.end());
        int sum = n - 1;
        for (int i = 0; i < a; i++)
        {
            ans.push_back(v[i]);
            sum--;
            i += sum;
        }
 
       
        for (auto val : ans)
        {
            cout << val<< " ";
        }
        cout << endl;
    }
    return 0;    
}