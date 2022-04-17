#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

vector<bool> x(17, false);
vector<bool> y(17, false);
int main() {
    int a, b;
    cin >> a >> b; 
    int n;
    cin >> n;
    rep (i, n) {
        int tx, ty;
        cin >> tx >> ty;
        x[tx] = true;
        y[ty] = true;
    }

    queue<int> qy;
    queue<int> qx;
    qy.push(1);
    qx.push(1);

    vector<vector<int>> memo(b+1, vector<int>(a+1, 0));
    vector<vector<bool>> dist(b+1, vector<bool>(a+1, false));
    memo[1][1] = 1;

    while (!qx.empty()) {
        int yy = qy.front();
        int xx = qx.front();
        qy.pop();
        qx.pop();
        if (dist[yy][xx]) continue;
        dist[yy][xx] = true;

        if (yy+1 <= b) {
            if (!(y[yy+1] && x[xx])) {
                memo[yy+1][xx] += memo[yy][xx];
                qy.push(yy+1);
                qx.push(xx);
            }
        }
        if (xx+1 <= a) {
            if (!(y[yy] && x[xx+1])) {
                memo[yy][xx+1] += memo[yy][xx];
                qy.push(yy);
                qx.push(xx+1);
            }
        }
    }
    cout << memo[b][a] << endl;
    rep (i, b+1) {
        for(auto x : memo[b-i]) printf("%d ", x);
        cout << endl;
    }
    return 0;
}
