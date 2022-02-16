#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    rep (i, h) rep (j, w) {
        int at;
        cin >> at;
        a[i][j] = at;
    }
    vector<int> aw(h, 0);
    vector<int> ah(w, 0);
    rep (i, h) rep (j, w) {
        aw[i] += a[i][j]; 
    }    
    rep (i, w) rep (j, h) {
        ah[i] += a[j][i]; 
    }    

    rep (i, h) {
        rep (j, w) printf("%d ", aw[i] + ah[j] - a[i][j]);
        cout << endl;
    }
    return 0;
}
