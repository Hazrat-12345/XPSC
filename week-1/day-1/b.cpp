#include<bits/stdc++.h>
using namespace std;
int main()
{
int A, B, C;
    cin >> A >> B >> C;
    int start = ((A + C - 1) / C) * C;
    if (start <= B) 
    {
        cout << start << endl;
    } else 
    {
        cout << -1 << endl;
    }    
}