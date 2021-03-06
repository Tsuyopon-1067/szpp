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
        int h, w;
        cin >> h >> w;
        if (h == 0 && w == 0) return 0;

        int r = h*h + w*w;
        int ah = INF;
        int aw = INF;
        int ar = INF;
        reps (i, 1, 150) reps (j, i+1, 150) {
            int tr = i*i + j*j;
            if (tr > r) {
                if (tr < ar) {
                    ar = tr;
                    ah = i;
                    aw = j;
                }
            } else if (tr == r && i > h) {
                if (tr <= ar) {
                    if (tr == ar && i > ah) continue;
                    ar = tr;
                    ah = i;
                    aw = j;
                }
            }
        }
        printf("%d %d\n", ah, aw);
        //printf("%d %d %d | %d %d %d \n", h, w, r, ah, aw, ar);
    }
    return 0;
}
