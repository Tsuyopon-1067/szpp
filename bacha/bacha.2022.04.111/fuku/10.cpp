#define rep(i, n) for (ll i = 0; i < (ll)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    ll ans = 0;
    if (a[0] > x) {
        ans += (a[0] - x);
        a[0] = x;
    }
    rep (i, n-1) {
        ll sum = a[i] + a[i+1];
        if (sum > x) {
            a[i+1] -= sum - x;
            ans += sum - x;
        }
    }
    cout << ans << endl;
    return 0;
}
