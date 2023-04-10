#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    ll t;
    cin>>t;
    map<pair<ll,ll>,string>mp;
    while(t--)
    {
        ll x,y;
        string s;
        cin>>x>>y>>s;

        pair<ll,ll>p;
        p.first=x;
        p.second=y;
        mp[p]=s;
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        pair<ll,ll>p;
        p.first=x;
        p.second=y;
        cout<<mp[p]<<endl;
    }


}
