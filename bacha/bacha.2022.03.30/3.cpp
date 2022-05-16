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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    rep (i, n) cin >> a[i] >> b[i] >> c[i];

    vector<vector<int>> dp(3, vector<int>(n+1, 0));
    rep (i, n) {
        dp[0][i+1] = max(dp[1][i] + b[i], dp[2][i] + c[i]);
        dp[1][i+1] = max(dp[2][i] + c[i], dp[0][i] + a[i]);
        dp[2][i+1] = max(dp[0][i] + a[i], dp[1][i] + b[i]);
    }
    int ans = 0;
    rep (i, 3) chmax(ans, dp[i][n]);
    cout << ans << endl;
    return 0;
}
