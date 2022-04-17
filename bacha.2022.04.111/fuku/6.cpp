#define rep(i, n) for (ll i = 0; i < (ll)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> ab(n);
    rep (i, n) cin >> ab[i].first >> ab[i].second;

    sort(ab.begin(), ab.end());
    ll ans = k;
    rep (i, n) {
        if (ab[i].first <= ans) ans += ab[i].second;
    }
    cout << ans << endl;
    return 0;
}
