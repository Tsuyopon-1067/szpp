#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);

    rep (i, m) {
        int a, b;
        cin >> a >> b;
        --a;
        --b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int ans = 0;
    rep (i, n) {
        int v = 0;
        for (auto a : g[i]) {
            if (a < i) v++;
        }
        if (v == 1) ans++;
    }
    cout << ans << endl;
    return 0;
}
