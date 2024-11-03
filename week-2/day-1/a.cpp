#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,x;
  cin>>n>>x;
  vector<int> v;
  for(int i=0;i<n;i++)
  {
    int d;
    cin>>d;
    if(d != x)
    v.push_back(d);
  }
  for(auto u: v)
  cout<<u<<" ";
  cout<<endl;
  

}
