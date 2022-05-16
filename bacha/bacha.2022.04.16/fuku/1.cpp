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
    long long h, w;
    cin >> h >> w;
    vector<vector<ll>> c(h, vector<ll>(w, 0));
    rep (i, h) rep (j, w) {
        char t;
        cin >> t;
        if (t == '.') c[i][j] = 0;
        else c[i][j] = t - '0';
    }

    ll dh[] = {1, -1, 0, 0};
    ll dw[] = {0, 0, 1, -1};
    rep (i, h) rep (j, w) {
        if (c[i][j] != 0) continue;
        set<ll>st;
        rep (k, 4) {
            ll th = i + dh[k];
            ll tw = j + dw[k];
            if (th < 0 || h <= th || tw < 0 || w <= tw) continue;
            st.insert(c[th][tw]);
        }
        reps (k, 1, 6) {
            if (st.find(k) == st.end()) {
                c[i][j] = k;
                break;
            }
        }
    }
    rep (i, h) {
        rep (j, w) cout << c[i][j];
        cout << endl;
    }
    return 0;
}
