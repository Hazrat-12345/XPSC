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

        vector<int> ans;
        int l = n * n, r = 1;
        while (l >= r) 
        {
            if (l == r)
                ans.push_back(r);
            else
             {
                ans.push_back(l);
                ans.push_back(r);
            }
            l--;
            r++;
        }

        int j = 0;
        for (int i = 1; i <= n; i++) 
        {
            stack<int> st;
            queue<int> q;
            int a = 0;

            while (a < n) 
            {
                if (i % 2 == 0)
                 { 
                    st.push(ans[j]);
                } 
                else
                 { 
                    q.push(ans[j]);
                }
                a++;
                j++;
            }

            if (!st.empty())
             {
                while (!st.empty())
                 {
                    cout << st.top() << " ";
                    st.pop();
                }
            }
             else
              {
                while (!q.empty()) 
                {
                    cout << q.front() << " ";
                    q.pop();
                }
            }
            cout << endl;
        }
    }

    return 0;    
}