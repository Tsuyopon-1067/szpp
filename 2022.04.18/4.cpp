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
    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    ll dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
    ll dy[] = {1, 2, 2, 1, -1, -2, -2, -1};
    ll lstx[8];
    ll lsty[8];

    rep (i, 8) {
        lstx[i] = x1 + dx[i];
        lsty[i] = y1 + dy[i];
    }

    string ans = "No"; 
    rep (i, 8) rep (j, 8) {
        ll tx = lstx[i] + dx[j];
        ll ty = lsty[i] + dy[j];
        if (tx == x2 && ty == y2) ans = "Yes"; 
    }
    cout << ans << endl;
    return 0;
}
