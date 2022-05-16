#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> ab(n);
    
    for (long long i = 0; i < n; ++i) cin >> ab[i].first >> ab[i].second;
    sort(ab.begin(), ab.end());

    ll ans = k;
    rep (i, n) {
        if (ans >= ab[i].first) ans += ab[i].second;
        else break;
    }
    cout << ans << endl;
    return 0;
}
