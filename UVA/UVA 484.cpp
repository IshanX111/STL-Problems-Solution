#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

    map<ll,ll>mp;
    ll x;
    set<ll>s;
    vector<ll>v;
    while(cin>>x){
        mp[x]++;
        if(s.count(x)==0){
            v.push_back(x);
            s.insert(x);
        }
    }
    for(ll i=0;i<v.size();i++){
        cout<<v[i]<<" "<<mp[v[i]]<<endl;
    }

}

