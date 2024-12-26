#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt = 0;
    for(int i=1;i<=n;i++) 
    {
        if(cnt<2) {
            cout<<'a';
            cnt++;
        }
        else if(cnt<4) 
        {
            cout<<'b';
            cnt++;
            if(cnt==4) cnt = 0;
        }
    }
    return 0;    
}