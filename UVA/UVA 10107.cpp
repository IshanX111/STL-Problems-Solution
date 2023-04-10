#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

    ll n;
    priority_queue<ll>pq;
    stack<ll>st;
    while (cin>>n){

        pq.push(n);
        ll c=pq.size();
        if(c%2!=0){
            c=(c/2)+1;
            while(c!=0){
                st.push(pq.top());
                pq.pop();
                c--;
                if(c==0){
                    cout<<st.top()<<endl;
                }
            }
            while(!st.empty()){
                pq.push(st.top());
                st.pop();
            }
        }
        else{
            c=(c/2);
            ll sum=0;
            while(c!=0){
                st.push(pq.top());
                pq.pop();
                c--;
                if(c==0){
                    sum+=st.top();
                    sum+=pq.top();
                    sum=sum/2;
                    cout<<sum<<endl;
                }
            }
            while(!st.empty()){
                pq.push(st.top());
                st.pop();
            }
        }

    }


}
