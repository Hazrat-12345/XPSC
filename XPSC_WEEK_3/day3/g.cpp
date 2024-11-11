#include <bits/stdc++.h>
using namespace std;

int main()
 {
    int t;
    cin >> t;

    while (t--) 
    {
        string a, b;
        cin >> a >> b;

        int lenA = a.size();
        int lenB = b.size();
        char A = a.back(); 
        char B = b.back(); 
        if (a == b)
         {
            cout << "=" << endl;
        }
        else if (A == 'L' && B == 'L')
         {
            if (lenA > lenB) cout << ">" << endl;
            else cout << "<" << endl;
        }
        else if (A == 'S' && B == 'S') 
        {
            if (lenA > lenB) cout << "<" << endl;
            else cout << ">" << endl;
        }
        else if (A == 'M') 
        {
            if (B == 'L') cout << "<" << endl;
            else if (B == 'S') cout << ">" << endl;
        }
        else if (B == 'M')
         {
            if (A == 'L') cout << ">" << endl;
            else cout << "<" << endl;
        }

        else 
        {
            if (A == 'S') cout << "<" << endl;
            else cout << ">" << endl;
        }
    }

    return 0;
}
