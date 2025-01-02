#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long  t;
    cin >> t;
    
    while (t--)
    {  
   string s;
   
   int n;
   cin>>n;
   cin>>s;
   int cnt=0,sum=0;
   string s1="ABCD";
   for (int i = 0; i < s1.length(); ++i)
   {
    cnt=0;
    for (int j = 0; j < s.size(); ++j)
    {
        if(s1[i]==s[j])cnt++;
    }
    cnt=min(n,cnt);
    sum+=cnt;
   }
   cout<<sum<<endl;
 
 }
    
    return 0;    
}