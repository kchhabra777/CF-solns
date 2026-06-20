#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define f first
#define s second

// qn 2A
void solve() {
    // Your code
    int n;
    cin>>n;
    map<string,int> mp;
    vector<pair<string,int>> v(n);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int x;
        cin>>x;
        mp[s] += x;
        v[i] = {s,x};
    }
    int cnt = INT_MIN;
    for(auto &i:mp){
        if(i.second > cnt) cnt = i.second;
    }
    map<string,int> kc;
    for(int i=0;i<n;i++){
        kc[v[i].f] += v[i].s;
        if(kc[v[i].f] >= cnt && mp[v[i].f] == cnt) {cout<<v[i].f<<endl; break;}
    }
}

int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
}