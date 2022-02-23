#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int def(int a, int b) {
    return (a > b ? a - b : b - a);
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());

    int q;
    cin >> q;

    rep (i, q) {
        int b;
        cin >> b;
        auto lit = lower_bound(a.begin(), a.end(), b);
        int lidx = distance(a.begin(), lit);
        int l = a[lidx];

        int l2 = a[max(0, lidx-1)];

        cout << min(def(l, b), def(l2, b)) << endl;
    }
    return 0;
}
