#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

map<char, int> te;
map<int, int> rspp;
int r, s, p;
int rsp(char mec, char opc) { // mec forbided
    int op = te[opc];
    int me_win = (4 + op) % 3;
    int res = rspp[me_win]; // point

    int me = te[mec];
    if (me_win == me) res = 0;
    return res;
}


int main() {
    int n, k;
    cin >> n >> k;
    cin >> r >> s >> p;
    string t;
    cin >> t;

    te['r'] = 0; te['s'] = 1; te['p'] = 2; te['a'] = 4;
    rspp[0] = r; rspp[1] = s; rspp[2] = p;

    vector<vector<int>> dp(n, vector<int>(3));
    dp[0][0] = rsp('a', t[0]);
    dp[0][1] = rsp('a', t[1]);
    dp[0][2] = rsp('a', t[2]);

    vector<int> te_me(0);
    for (int i = 1; i < n; i++) {
        int idx = i - k;
        int inc = rsp(t[i]);
    }

    return 0;
}
