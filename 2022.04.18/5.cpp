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
    long long n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    map<ll, vector<ll>>mp;
    rep (i, n) mp[a[i]].push_back(i+1);
    
    rep (i, q) {
        long long x, k;
        cin >> x >> k;
        if ((ll)(mp[x].size()) < k) cout << -1 << endl;
        else cout << mp[x][k-1] << endl;
    }
    return 0;
}
