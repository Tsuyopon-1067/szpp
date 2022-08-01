#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
#define reps(i, s, n) for (long long i = (long long)(s); i < (long long)(n); ++i)
#define rrep(i, n) for (long long i = (long long)(n-1); i >= 0; --i)
#define MOD 1000000007
#define INF 2000000000
#define INFL 1000000000000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int solve(ll n) {
    vector<vector<ll>> p(n, vector<ll>(n+1, 0));
    vector<ll> num(n);
    int player = n;
    rep (i, n) {
        ll c1, c2;
        cin >> c1 >> c2;
        ++p[i][c1];
        ++p[i][c2];
        num[i] = 2;
    }

    ll minCard = INFL;
    ll ans = 0;
    while(true) {
        rep (i, n) {
            if (num[i] == 0) {
                continue;
            }
            reps (j, 1, n+1) {
                if (p[i][j] == 2) {
                    p[i][j] = 0;
                    num[i] -= 2;
                }
            }
            minCard = INFL;
            reps (j, 1, n+1) {
                if (p[i][j] > 0) {
                    minCard = j;
                    break;
                }
            }
            if (minCard != INFL) {
                --p[i][minCard];
                --num[i];
                ++ans;
                ll idx = i+1;
                rep (j, n-1) {
                    idx = (i + j + 1) % n;
                    printf("idx:%lld num:%lld\n", idx, num[idx] );
                    cout << num[idx] << endl;
                    if (num[idx] > 0) break;
                }
                printf("i:%lld, idx:%lld\n", i, idx);
                ++p[idx][minCard];
                ++num[idx];
            }
        for (long long i = 0; i < n; ++i) {
            cout << i << ", " << num[i] << ": ";
            for (auto x : p[i]) cout << x << " ";
            cout << endl;
        }
            cout << "min:" << minCard << endl;
        }
        bool isFinish = true;
        rep (i, n) {
            if (num[i] > 0) isFinish = false;
        }
        if (isFinish) break;
    }
    cout << ans << endl;
    return 0;
}
int main() {
    while (true) {
        long long n;
        cin >> n;
        if (n == 0) break;
        solve(n);
        cout << "-------" << endl;
    }
}
