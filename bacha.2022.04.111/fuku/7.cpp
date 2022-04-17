#define rep(i, n) for (ll i = 0; i < (ll)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    double va, vb, l;
    cin >> n >> va >> vb >> l;

    rep (i, n) {
        double t = l / va;
        l = vb*t;
    }
    printf("%.6lf\n", l);
    return 0;
}
