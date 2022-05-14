#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<ll> s(n);
    vector<ll> t(n);
    for (auto &x : s) cin >> x;
    for (auto &x : t) cin >> x;

    vector<ll> ans(n);
    rep (i, n) ans[i] = t[i];
    rep (i, 2*n) {
        ll nx = (i + 1) % n;
        ll now = i % n;
        ans[nx] = min(ans[now] + s[now], ans[nx]);
    }
    
    rep (i, n) cout << ans[i] << endl;
    return 0;
}
