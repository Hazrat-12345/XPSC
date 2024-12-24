#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt0=0;
        int cnt1=0;
        int mn=INT_MAX;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }
         mn=min({cnt0,cnt1,mn});
        if(mn%2!=0)
        {
            cout<<"Zlatan"<<endl;
        }
        else
        {
            cout<<"Ramos"<<endl;
        }
       
    }
    return 0;
}