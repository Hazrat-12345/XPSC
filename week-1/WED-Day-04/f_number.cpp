#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
    cin >> s;
    bool p[26] = {false};
    for (char ch : s) {
        p[ch - 'a'] = true;
    }
    char mis = '\0';
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        if (!p[ch - 'a']) 
        {  
            mis = ch;
            break;
        }
    }
    if (mis == '\0') 
        cout << "None" << endl;
    else 
        cout << mis << endl;    
}