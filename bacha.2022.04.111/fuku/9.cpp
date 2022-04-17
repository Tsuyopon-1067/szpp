#define rep(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define reps(i, s, n) for (ll i = (s); i < (ll)(n); ++i)
#define rrep(i, n) for (ll i = (ll)(n-1); i >= 0; --i)
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
    long long h, w;
    cin >> h >> w;
    vector<vector<bool>> s(h, vector<bool>(w));
    rep (i, h) rep (j, w) {
        char tmp;
        cin >> tmp;
        s[i][j] = (tmp == '.' ? true : false);
    }

    vector<vector<ll>> dist(h, vector<ll>(w, -1));
    queue<pair<ll, ll>> que;
    que.push({0, 0});
    dist[0][0] = 1;

    ll dh[] = {1, -1, 0, 0};
    ll dw[] = {0, 0, 1, -1};
    while (!que.empty()) {
        pair<ll, ll> v = que.front();
        que.pop();
        ll vh = v.first;
        ll vw = v.second;
        rep (i, 4) {
            ll th = vh + dh[i];
            ll tw = vw + dw[i];
            if (th < 0 || h <= th || tw < 0 || w <= tw || dist[th][tw] != -1 || !s[th][tw]) continue;
            dist[th][tw] = dist[vh][vw] + 1;
            que.push({th, tw});
        }
    }
    
    ll white = 0;
    rep (i, h) rep (j, w) {
        if (s[i][j]) ++white;
    }

    ll goal = dist[h-1][w-1];
    if (goal == -1) cout << -1 << endl;
    else cout << white - goal << endl;
    return 0;
}
