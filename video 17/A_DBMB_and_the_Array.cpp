#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define vi vector<int>
#define ip(x) for(auto &it : x) cin >> it 
#define all(x) x.begin(),x.end()
                                                     // - Mohammad Hasibur Rahman

void solve(){
    int n, s, x; cin >> n >> s >> x;
    vi v(n);
    ip(v);

    int sum = accumulate(all(v));
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;

    while(t--) solve(); 
}