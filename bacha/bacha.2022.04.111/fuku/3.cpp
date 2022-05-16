#define rep(i, n) for (ll i = 0; i < (ll)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<string> s(n);
    vector<ll> t(n);
    rep (i, n) cin >> s[i] >> t[i];
    string x;
    cin >> x;

    bool flag = false;
    ll ans = 0;
    rep (i, n) {
        if (flag) ans += t[i];
        else if (s[i] == x) flag = true;
    }
    cout << ans << endl;
    return 0;
}
