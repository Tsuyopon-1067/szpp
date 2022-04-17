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

    vector<vector<ll>> dp(N+1, vector<ll>(W+1));
    rep (i, N) {
        rep (j, W+1) {
            dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
            if (j+w[i] <= W) dp[i+1][j+w[i]] = max(dp[i+1][j+w[i]], dp[i][j]+v[i]);
        }
    }
    ll ans = 0;
    rep (j, W+1) chmax(ans, dp[N][j]);
    cout << ans << endl;
    return 0;
}
