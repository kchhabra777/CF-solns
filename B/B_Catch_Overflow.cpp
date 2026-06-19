#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define all(v) (v).begin(), (v).end()
#define pb push_back
const long long LIMIT = (1LL<<32);
// QN 1175 B
void solve() {
    // Your code
    int l;
    cin>>l;
    int x=0;
    bool flag = 0;
    stack<int> st;
    st.push(1);
    while(l--){
        string s;
        cin>>s;
        
        if(s == "for"){
            int n;
            cin>>n;
            st.push(min(st.top()*n , LIMIT));
        }
        if(s == "add"){
            int multiplier = st.top();
            x += (multiplier*1);
            if(x >= LIMIT) {flag=1;x=INT_MIN;}
        }
        if( s == "end" && !st.empty()) st.pop();
    }
    if(flag) cout<<"OVERFLOW!!!"<<endl;
    else cout<<x<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
// ~ code by Krishna Chhabra ~