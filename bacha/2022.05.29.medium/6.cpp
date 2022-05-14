#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
#define reps(i, s, n) for (long long i = (long long)(s); i < (long long)(n); ++i)
#define rrep(i, n) for (long long i = (long long)(n-1); i >= 0; --i)
#define MOD 1000000007
#define INF 2000000000
#define INFL 1000000000000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
template <typename T> long long count_digit(T n) { long long res = 0; while (n > 0) { ++res; n /= 10; } return res; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    vector<ll> x(n);
    vector<ll> y(n);
    vector<ll> h(n);
    rep (i, n) cin >> x[i] >> y[i] >> h[i];

    ll lx = 0;
    ll rx = 100;
    ll ly = 0;
    ll ry = 100;
    rep (i, n) {
        if (x[i] <= 0) continue;
        chmin(rx, h[i]);
        chmin(ry, h[i]);
        chmax(ly, h[i]-100);
        chmax(ly, h[i]-100);
    }
    cout << rx << endl;
    cout << lx << endl;
    cout << ry << endl;
    cout << ly << endl;

    return 0;
}
