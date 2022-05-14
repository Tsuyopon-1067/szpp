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
    vector<string> s(n);
    for (auto &x : s) cin >> x;

    map<string, ll>mp;
    rep (i, n) ++mp[s[i]];

    ll len = 0;
    rep (i, n) chmax(len, mp[s[i]]);

    vector<string> ans;
    rep (i, n) {
        if (mp[s[i]] == len) ans.push_back(s[i]);
    }
    
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    for (auto x : ans) {
        cout << x << endl;
    }
    
    return 0;
}
