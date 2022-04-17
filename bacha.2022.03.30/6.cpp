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
    string s, t;
    cin >> s >> t;
    int sn = s.length();
    int tn = t.length();
    int ansn = 0;
    string ans = "";

    //vector<vector<int>> dp(sn+1, vector<int>(tn+1, 0));
    rep (i, sn) {
        vector<vector<int>> dp(sn+1, vector<int>(tn+1, 0));
    }

    cout << ans << endl;
    return 0;
}
