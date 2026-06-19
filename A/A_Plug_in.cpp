#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define all(v) (v).begin(), (v).end()
#define pb push_back

// problem no:- 81 A

void solve() {
    // Your code
    string s;
    cin>>s;
    stack<char> st;
    string ans;
    st.push(s[0]);
    int n = s.size();
    for(int i=1; i<n; i++){
        if(st.empty()) {st.push(s[i]); continue;}
        char ch = st.top();
        if(s[i]==ch){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    reverse(all(ans));
    cout<<ans<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
// ~ code by Krishna Chhabra ~