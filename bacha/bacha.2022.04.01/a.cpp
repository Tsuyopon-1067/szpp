#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) return 0;

        vector<string> f(n);
        for (auto &x : f) cin >> x;

        bool l = false;
        bool r = false;
        bool b = false;
        int ans = 0;
        rep (i, n) {
            string s = f[i];
            if (s == "lu") l = true;
            else if (s == "ru") r = true;
            else if (s == "ld") l = false;
            else if (s == "rd") r = false;

            if (b == false) {
                if (l && r) {
                    b = true;
                    ++ans;
                }
            } else {
                if (!l && !r) {
                    b = false;
                    ++ans;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
