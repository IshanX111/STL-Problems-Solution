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
    sort(v.begin(),v.end());
    for(ll i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;




}
