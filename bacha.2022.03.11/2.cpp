#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    vector<int> d(n);
    for(int i = 0; i < n; ++i) cin >> h[i];

    d[0] = 0;
    rep (i, n-1) {
        if (h[i] >= h[i+1]) d[i+1] = d[i] + 1;
        else d[i+1] = 0;
    }
    int ans = 0;
    rep (i, n) ans = max(ans, d[i]);
    cout << ans << endl;
    return 0;
}
