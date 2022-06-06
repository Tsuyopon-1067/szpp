#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
#define reps(i, s, n) for (long long i = (long long)(s); i < (long long)(n); ++i)
#define rrep(i, n) for (long long i = (long long)(n-1); i >= 0; --i)
#define MOD 1000000007
#define INF 2000000000
#define INFL 1000000000000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
template <typename T> long long count_digit(T n) { long long res = 0; while (n > 0) { ++res; n /= 10; } return res; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, tt;
    cin >> n >> tt;
    vector<ll> c(n);
    vector<ll> t(n);
    rep (i, n) cin >> c[i] >> t[i];

    vector<ll> cost;
    rep (i, n) {
        if (t[i] <= tt) cost.push_back(c[i]);
    }
    if (cost.size() == 0) {
        cout << "TLE" << endl;
        return 0;
    }
    ll ans = INFL;
    for (auto x : cost) chmin(ans, x);
    cout << ans << endl;
    return 0;
}
