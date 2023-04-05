#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        ll si=s.size();
        stack<ll>st;
        ll c=0;
        ll c1=0;
        for(ll i=0; i<si; i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else if(s[i]==')' || s[i]=='}' || s[i]==']')
            {
                if(st.empty()){
                    c1++;
                    break;
                }
                if(!st.empty())
                {
                    if(st.top()=='(' && s[i]==')')
                    {
                        st.pop();
                        continue;
                    }
                    else if(st.top()=='{' && s[i]=='}')
                    {
                        st.pop();
                        continue;
                    }

                    else if(st.top()=='[' && s[i]==']')
                    {
                        st.pop();
                        continue;
                    }
                    else
                    {
                        c++;
                        break;
                    }
                }
            }
        }
        if(!st.empty() || c!=0 || c1!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        while(!st.empty()){
            st.pop();
        }




    }

}
