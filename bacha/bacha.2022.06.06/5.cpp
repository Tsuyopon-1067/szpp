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
    long long n;
    cin >> n;
    vector<ll> d(n);
    for (auto &x : d) cin >> x;
    sort(d.begin(), d.end());

    vector<ll> cnt(200001, 0);
    for (auto x : d) ++cnt[x];

    ll rui = 0;
    ll preRui= 0;
    for (auto x : cnt) {
        rui += x;
        if (rui > n/2) break;
        preRui = rui;
    }
    if (preRui != n/2) {
        cout << 0 << endl;
        return 0;
    }

    ll mid = d[preRui];
    ll ans = 0;
    for (ll i = mid-1; i >= 0; --i) {
        ++ans;
        if (cnt[i] > 0) break;
    }
    cout << ans << endl;


    return 0;
}
