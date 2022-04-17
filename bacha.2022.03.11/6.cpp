#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; ++i) cin >> s[i];

    vector<vector<int>> dp(n+1, vector<int>(n+1));
    dp[n][0] = 1;
    return 0;
}
