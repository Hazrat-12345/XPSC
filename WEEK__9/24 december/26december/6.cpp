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
        vector<int> v(n);
        for(int i=0;i<n;i++) 
        {
            cin>>v[i];
        }
        stack<int> st;
        st.push(v.front());
        cout<<1;
        int cnt = 0;
        for(int i=1;i<n;i++) 
        {
            if(v[i]>=st.top()) 
            {
                if(cnt==1) {
                    if(v[i]<=v.front()) 
                    {
                        st.push(v[i]);
                        cout<<1;
                    }
                    else cout<<0;
                }
                else 
                {
                    st.push(v[i]);
                    cout<<1;
                }
            }
            else
             {
                if(cnt==0 && v[i]<=v.front()) 
                {
                    cnt++;
                    st.push(v[i]);
                    cout<<1;
                }
                else cout<<0;
            }
        }
        cout<<endl;
    }
    return 0;    
}