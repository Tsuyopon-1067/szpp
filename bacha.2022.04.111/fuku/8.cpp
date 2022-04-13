#define rep(i, n) for (ll i = 0; i < (ll)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    ll x = a[n-1];
    rep (i, n-1) {
        if (a[i] > a[i+1]) {
            x = a[i];
            break;
        }
    }

    for (auto y : a) {
        if (y != x) printf("%lld ", y);
    }
    cout << endl;
    return 0;
}
