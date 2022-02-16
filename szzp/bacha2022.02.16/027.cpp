#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> usr;
    map<string, int> is_sign;
    map<string, int> is_out;
    vector<string> s(n);
    rep (i, n) {
        string st;
        cin >> st;
        if (is_sign[st] == -1) {
            continue;
        } else {
            s[i] = st;
            usr[st] = i+1;
            is_sign[st] = -1;
            cout << i+1 << endl;
        }
    }
    return 0;
}
