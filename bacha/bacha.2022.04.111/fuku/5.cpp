#define rep(i, n) for (ll i = 0; i < (ll)(n); ++i)
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<ll> h(n);
    for (auto &x : h) cin >> x;

    ll ans = 0;
    ll k = 0;
    rep (i, n-1) {
        if (h[i] < h[i+1]) k = 0;
        else ++k;
        chmax(ans, k);
    }
    cout << ans << endl;
    return 0;
}
