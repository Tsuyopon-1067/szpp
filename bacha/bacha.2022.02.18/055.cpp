#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, p, q;
    cin >> n >> p >> q;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll ans = 0;
    rep (b, n) reps (b+1, c, n) reps (c+1, d, n) reps (d+1, e, n) reps (e+1, f, n) {
        ll m = a[b] % p;
        m = (m * a[c]) % p;
        m = (m * a[d]) % p;
        m = (m * a[e]) % p;
        m = (m * a[f]) % p;
        if (m % p == q) ans++;
    }
    cout << ans << endl;
    return 0;
}
