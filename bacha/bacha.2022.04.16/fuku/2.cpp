#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y, z;
    cin >> x >> y >> z;
    rep (i, 1000002) {
        if (i * x >= y * z) {
            cout << i-1 << endl;
            return 0;
        }
    }
    return 0;
}
