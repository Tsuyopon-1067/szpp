#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
#define MOD 1000000007
#define INF 2000000000
#define INFL 1000000000000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
template <typename T> int count_digit(T n) { int res = 0; while (n > 0) { ++res; n /= 10; } return res; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, n;
    cin >> x >> n;
    set<ll>p;
    rep (i, n) {
        ll t;
        cin >> t;
        p.insert(t);
    }

    ll d = INFL;
    ll ans = 0;
    for (int i = 101; i >= 0; --i) {
        if (p.find(i) != p.end()) continue;
        ll dt = abs(i - x);
        if (dt <= d) {
            ans = i;
            d = dt;
        }
    }
    cout << ans << endl;
    return 0;
}
