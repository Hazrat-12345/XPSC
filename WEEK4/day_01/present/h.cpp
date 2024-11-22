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
        string line;
        cin >> line;
        long long val = 0;
        priority_queue<long long> pq;
        for (int i = 0; i < n; i++) 
		{
            if (line[i] == 'L')
			{
                val += i;
                pq.push((n - 1 - i) - i);
            }
			 else 
			 {
                val += (n - 1 - i);
                pq.push(i - (n - 1 - i));
            }
        }

        vector<long long> res(n);
        long long cur_val = val;
        for (int k = 1; k <= n; k++) 
		{
            if (!pq.empty() && pq.top() > 0) 
			{
                cur_val+= pq.top();
                pq.pop();
            }
            res[k - 1] = cur_val;
        }
        for (long long val : res) 
		{
            cout << val << " ";
        }
        cout <<endl;
    }	
}