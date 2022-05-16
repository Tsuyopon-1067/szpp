#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> mp;

    rep (i, n) {
        string s;
        cin >> s;
        if (mp[s] != -1) {
            cout << (i+1) << endl;
            mp[s] = -1;
        }
    }
    return 0;
}
