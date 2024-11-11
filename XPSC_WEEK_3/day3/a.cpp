#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x,y,z;
   cin>>x>>y>>z;
   double point_gese = 0;
   point_gese += z;
   point_gese += 0.5 * y;
   if(point_gese< 2)
   cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
}

