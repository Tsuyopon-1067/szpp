#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    rep (i, n) rep (j, n) cin >> a[i][j];

    int m;
    cin >> m;
    vector<vector<int>> x(m, vector<int>(2));
    rep (i, m) rep (j, m) cin >> x[i][j];

    vector<vector<int>> dp(n+1, vector<int>(n+1));
    rep (i, n) dp[0][i] = 0;

    return 0;
}
