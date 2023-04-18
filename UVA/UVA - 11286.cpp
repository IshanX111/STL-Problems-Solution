#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n;

    while(cin>>n && n!=0)
    {

        vector<vector<ll>>vv;
        while(n--)
        {

            vector<ll>v;
            for(ll i=0; i<5; i++)
            {
                ll x;
                cin>>x;
                v.push_back(x);
            }

            sort(v.begin(),v.end());
            vv.push_back(v);

        }
        map<vector<ll>,ll>mp;
        for(ll i=0; i<vv.size(); i++)
        {
            mp[vv[i]]++;
        }
        ll maxi=-1;
        for(auto itr:mp)
        {
            if(itr.second>maxi)
            {
                maxi=itr.second;
            }
        }
        ll c=0;
        for(ll i=0; i<vv.size(); i++)
        {
            if(mp[vv[i]]==maxi){
                c++;
            }
        }
        cout<<c<<endl;
    }



}

