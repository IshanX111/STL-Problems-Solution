#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
bool cmp(pair<ll,ll>&a,pair<ll,ll>&b){

    return (a.first < b.first) || (a.first == b.first && a.second > b.second);

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        vector<pair<ll,ll> >vp;
        ll n;
        cin>>n;
        while(n--){
            ll x,y;
            cin>>x>>y;
            vp.push_back({x,y});
        }
        sort(vp.begin(),vp.end(),cmp);
        for(ll i=0;i<vp.size();i++){
            cout<<vp[i].first<<" "<<vp[i].second<<endl;
        }
    }







}
