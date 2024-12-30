#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
 
int ans= (1 << s.size()) - 1;
int m = 0;
for (int i=0;i<s.size();i++) 
{
 m*=2;
 if (s[i] == '7') m++;
}
cout << ans+ m << endl;    
}