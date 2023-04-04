#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    ll t;
    cin>>t;
    ll kase=1;
    while(t--)
    {
        map<pair<ll,ll>,ll >mp;

        ll x,y,t,u;
        cin>>t>>u;
        while(u--)
        {
            cin>>x>>y;
            pair<ll,ll>pi;
            pi.first=x;
            pi.second=y;
            mp[pi]++;
        }
        cout<<"Scenario #"<<kase<<": ";
        kase++;
        ll cm=0;
        for(auto itr :mp)
        {
            if(itr.second>1)
            {
                cm++;
                //cout<<"impossible"<<endl;
            }
            else
            {
                //cout<<"possible"<<endl;
            }
        }
        if(cm!=0)
        {
            cout<<"impossible"<<endl;
        }
        else
        {
            cout<<"possible"<<endl;
        }

    }


}
