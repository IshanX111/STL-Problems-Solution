#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll x;
    cin>>x;
    while(x--){
        ll q;
        cin>>q;
        ll res=binary_search(v.begin(),v.end(),q);
        if(res==1){
            ll xx=lower_bound(v.begin(),v.end(),q)-v.begin();
            cout<<"Yes ";
            cout<<xx+1<<endl;
        }
        else{

            cout<<"No ";
            ll xx=upper_bound(v.begin(),v.end(),q)-v.begin();
            cout<<xx+1<<endl;

        }
    }





}
