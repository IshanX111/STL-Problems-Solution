#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

    set<ll>s;
    ll t;
    cin>>t;
    while(t--){

        ll q,x;
        cin>>q>>x;
        if(q==1){
            s.insert(x);
        }

        else if(q==2){
            s.erase(x);
        }
        else{
            if(s.count(x)==0){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }



    }






}
