#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    cin >>t;
    while (t--)
    {
        long long  n, pcount = 0, scount = 0;
        string s;
        cin >> n >> s;
        for (auto i : s)
        {
            pcount += (i == 'p');
            scount += (i == 's');
        }
        if (pcount == 0 || scount == 0)
            cout << "YES"<<endl;
        else if (pcount > 1 && scount > 1)
            cout << "NO"<<endl;
        else if (pcount == 1 && s.back() == 'p')
            cout << "YES"<<endl;
        else if (scount == 1 && s.front() == 's')
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
    return 0;    
}