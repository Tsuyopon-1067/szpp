#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    rep (i, n) {
        bool o = false;
        bool x = false;
        if (s[i] == 'o') o = true;
        else x = true;
        reps (i+1, j, n) {
            if (s[j] == 'o') o = true;
            else x = true;

            if (o && x) {
                ans += (n - i + 1);
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
