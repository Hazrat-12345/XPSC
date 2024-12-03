#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    int size=n-k;
    for(int i=size;i>=1;i--)
    {
        cout<<i<<" ";
    }
    for(int i=size+1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
  }    
}