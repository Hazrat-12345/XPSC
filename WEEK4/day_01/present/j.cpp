#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        int maxSum = 0;
        vector<pair<int, int>> d = {{1, 1},{-1, -1}, {1, -1}, {-1, 1}  };
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sum = v[i][j];
                for (auto [dx, dy] : d)
                {
                    int x = i, y = j;
                    while (x + dx >= 0 && x + dx < n && y + dy >= 0 && y + dy < m)
                    {
                        x += dx;
                        y += dy;
                        sum += v[x][y];
                    }
                }

                maxSum = max(maxSum, sum);
            }
        }

        cout << maxSum << endl;
    }

    return 0;    
}