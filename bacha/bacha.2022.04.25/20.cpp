typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    ll a, b;
    ll bn = 0;
    for (b = 5; b < n; b *= 5) {
        ++bn;
        ll an = 0;
        for (a = 3; a + b <= n; a *= 3) {
            ++an;
            if (a + b == n) {
                printf("%lld %lld\n", an, bn);
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}
