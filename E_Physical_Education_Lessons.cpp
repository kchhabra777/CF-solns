#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define all(v) (v).begin(), (v).end()
#define pb push_back

void solve() {
    // Your code
    int n;
    cin>>n;
    int q;
    cin>>q;
    int nwday = 0;
    int wday = n;
    while(q--){
        int L,R,K;
        cin>>L>>R>>K;
        if(K==1){// non working day
            nwday +=
        }
    }
}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define all(v) (v).begin(), (v).end()
#define pb push_back

void solve() {
    // Your code
    int n;
    cin>>n;
    vector<string> v(n);
    for(auto &i:v)cin>>i;
    set<string> st;
    reverse(all(v));
    for(auto &i:v){
        if(st.find(i) == st.end()) {cout<<i<<endl;st.insert(i);}
    }
}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
// ~ code by Krishna Chhabra ~