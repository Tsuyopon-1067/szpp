#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<ll>> a(3, vector<ll>(n));
    rep (i, 3) rep (j, n) cin >> a[i][j];

    vector<vector<ll>> dp(4, vector<ll>(46, 0));
    dp[0][0] = 1;

    rep (i, 3) rep (j, 46) {
        rep (k, n) {
            int idx = (j + a[i][k]) % 46;
            dp[i+1][idx] = dp[i+1][idx] + dp[i][j];
        }
    }

    cout << dp[3][0] << endl;
    return 0;
}
