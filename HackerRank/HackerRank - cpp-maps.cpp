#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

    ll t;
    cin>>t;
    map<string,ll>mp;
    while(t--){
        ll q;
        cin>>q;
        if(q==1){
            string s;
            cin>>s;
            ll x;
            cin>>x;
            mp[s]+=x;


        }
        else if(q==2){
            string s1;
            cin>>s1;
            mp.erase(s1);
        }
        else if(q==3){
            string s1;
            cin>>s1;
            cout<<mp[s1]<<endl;
        }
    }




}
