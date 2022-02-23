#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(2));
    rep (i, n) {
        cin >> a[i][0];
        a[i][1] = i+1;
    }
    sort(a.begin(), a.end());
    rep (i, n) printf("%d ", a[i][1]);
    cout << endl;
    return 0;
}
