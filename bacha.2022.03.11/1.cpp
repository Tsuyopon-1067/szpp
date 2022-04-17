#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int m = 99999;
    int x = 0;

    rep (i, n) {
        int a;
        cin >> a;
        sum += a;
        m = min(m, a);
        x = max(x, a);
    }
    cout << sum - m - x << endl;
    return 0;
}
