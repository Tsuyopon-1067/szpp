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
    vector<long long> a(n);
    vector<long long> b(n);
    rep (i, n) cin >> a[i] >> b[i];

    ll wa = INFL;
    ll wb = INFL;
    ll idxa = 0;
    ll idxb = 0;
    rep (i, n) {
        if (a[i] < wa) {
            wa = a[i];
            idxa = i;
        }
        if (b[i] < wb) {
            wb = b[i];
            idxb = i;
        }
    }
    if (idxa != idxb) cout << max(wa, wb) << endl;
    else {
        ll wa2 = INFL;
        ll wb2 = INFL;
        rep (i, n) {
            if (i != idxa) chmin(wa2, a[i]);
            if (i != idxb) chmin(wb2, b[i]);
        }
        ll ans = wa + wb;
        ll ans21 = max(wa, wb2);
        ll ans22 = max(wa2, wb);
        chmin(ans, ans21);
        chmin(ans, ans22);
        cout << ans << endl;
        return 0;
    }
    
    return 0;
}
