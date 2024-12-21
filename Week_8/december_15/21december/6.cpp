#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;while(t--) 
    {
        int n,m;
        cin>>n>>m;
        if(n>m) {
            cout<<"No"<<endl;
        }
        else if(n%2==1) {
            cout<<"Yes"<<endl;
            for(int i=1;i<n;i++) 
            {
                cout<<1<<" ";
            }
            cout<<m-n+1<<endl;
        }
        else if(n%2==0) {
            if(m%2==0) {
                cout<<"Yes"<<endl;
                for(int i=1;i<n-1;i++) 
                {
                    cout<<1<<" ";
                }
                cout<<(m-n+2)/2<<" "<<(m-n+2)/2<<endl;
            }
            else 
            {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;    
}