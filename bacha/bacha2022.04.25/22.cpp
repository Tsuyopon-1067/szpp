#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    map<ll, ll>count;
    for(auto x : a) {
        ++count[x-1];
        ++count[x];
        ++count[x+1];
    }

    ll ans = 0;
    rep (i, 100002) chmax(ans, count[i]);
    cout << ans << endl;

    return 0;
}
