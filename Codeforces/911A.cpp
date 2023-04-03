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
    ll x=*min_element(v.begin(),v.end());
    vector<ll>v1,v2;
    for(ll i=0;i<n;i++){
        if(v[i]==x){
            v1.push_back(i);
        }
    }
    for(ll i=0;i<v1.size()-1;i++){
        v2.push_back(abs(v1[i]-v1[i+1]));
    }
    ll finalres=*min_element(v2.begin(),v2.end());
    cout<<finalres<<endl;


}
