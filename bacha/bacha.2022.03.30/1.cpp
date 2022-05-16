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
    vector<int> h(n);
    for (auto &x : h) cin >> x;

    vector<int> dp(n, 0);
    reps (i, 1, n) {
        if (i - 1 >= 0) dp[i] = dp[i-1] + abs(h[i-1] - h[i]);
        if (i - 2 >= 0) dp[i] = min(dp[i], dp[i-2] + abs(h[i-2] - h[i]));
    }
    cout << dp[n-1] << endl;
    return 0;
}
