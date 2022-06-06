#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long k;
    cin >> k;

    ll ans = 0;
    ll m = 0;
    rep (i, k) {
        ++ans;
        m *= 10;
        m += 7;
        m %= k;
        if (m == 0) {
            cout << ans << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
