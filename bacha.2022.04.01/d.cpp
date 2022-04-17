#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
#define MOD 1000000007
#define INF 2000000000
#define INFL 1000000000000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
template <typename T> int count_digit(T n) { int res = 0; while (n > 0) { ++res; n /= 10; } return res; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        int dylst[] = {1, 1, -1, -1};
        int dxlst[] = {1, -1, 1, -1};

        int w, h;
        cin >> w >> h;

        vector<vector<int>> c(h, vector<int>(w));
        rep (i, h) rep (j, w) cin >> c[i][j];
        
        vector<vector<int>> g(h*w);

        vector<int> atr(h*w, -1);
        int k = 0;
        rep (i, h) rep (j, w) {
            int st = i*h + j;
            if (atr[st] == -1) continue;

            queue<int> que;
            que.push(st);
            while (!que.empty()) {
                for(auto dy : dylst) for(auto dx : dxlst) {
                    if (i + dy < 0 || i + dy >= h || j + dx < 0 || j + dx >= w) continue;
                }
            }
        }
    }
    return 0;
}
