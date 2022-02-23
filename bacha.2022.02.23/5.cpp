#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#define MOD 1000000007
#include <bits/stdc++.h>
typedef long long  ll;
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    vector<vector<ll>> dp(n, vector<ll>(j, 0));

    rep (i, n) {
        if (s[i] == 'c') dp[0][i] = 1;
    }

    string ck = "chokudai";
    reps (1, i, 8) rep (j, n) {
        if (s[j] != ck[i]) continue;
        ll count = 0;
        rep (k, j) {
            count += dp[i-1][k];
            count %= MOD;
        }
        printf("count=%lld\n", count);
        dp[i][j] = count;
    }
    ll ans = 0;
    rep (i, n) {
        ans += dp[7][i];
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}
