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
    int N, W;
    cin >> N >> W;
    vector<ll> w(N);
    vector<ll> v(N);
    rep (i, N) cin >> w[i] >> v[i];
    ll V = 100 * 1000;
    vector<vector<ll>> dp(N+1, vector<ll>(V+1, INFL));
    dp[0][0] = 0;

    rep (i, N) rep (j, V) {
        dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
        if (j + v[i] <= V) dp[i+1][j+v[i]] = min(dp[i+1][j+v[i]], dp[i][j] + w[i]);
    }
    ll ans = 0;
    rep (j, V+1) {
        if (dp[N][j] != INFL && dp[N][j] <= W) ans = j;
    }
    cout << ans << endl;
    return 0;
}
