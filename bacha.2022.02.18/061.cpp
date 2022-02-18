#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    vector<int> ans(0);
    rep (i, q) {
        int t, x;
        cin >> t >> x;
        switch (t) {
            case 1:
                ans.insert(ans.begin(), x);
                break;
            case 2:
                ans.push_back(x);
                break;
            case 3:
                cout << ans[x-1] << endl;
                break;
        }
    }
    return 0;
}
