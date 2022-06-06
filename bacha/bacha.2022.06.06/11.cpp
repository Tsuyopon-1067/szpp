#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;
ll dd(ll x1, ll y1, ll x2, ll y2) {
    return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
}
int main() {
    long long txa, tya, txb, tyb, t, v;
    cin >> txa >> tya >> txb >> tyb >> t >> v;
    long long n;
    cin >> n;

    vector<ll> x(n);
    vector<ll> y(n);
    rep (i, n) cin >> x[i] >> y[i];

    string ans = "NO";
    rep (i, n) {
        ll cx = txa + txb;
        ll cy = tya + tyb;
        ll ax = 2*x[i] - cx;
        ll ay = 2*y[i] - cy;
        ll tv2 = 4*t*t*v*v;
        ll sg = 4*(txa-txb)*(txa-txb) + 4*(tya-tyb)*(tya-tyb);
        if (4*ax*ax * (sg - tv2) + 4*ay*ay*tv2 <= tv2 * (sg - tv2)) ans = "Yes";
    }
    cout << ans << endl;
    return 0;
}
