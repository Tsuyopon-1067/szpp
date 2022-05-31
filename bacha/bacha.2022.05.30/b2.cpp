#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
#define reps(i, s, n) for (long long i = (long long)(s); i < (long long)(n); ++i)
#define rrep(i, n) for (long long i = (long long)(n-1); i >= 0; --i)
#define MOD 1000000007
#define INF 2000000000
#define INFL 1000000000000000000
#define MX 300001
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
template <typename T> long long count_digit(T n) { long long res = 0; while (n > 0) { ++res; n /= 10; } return res; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int getudo(int n) {
    if (n % 2 == 0) return 7*(n/2) + 1;
    else return 7*(n/2) + 6;
}
int main() {
    vector<int> gl;
    vector<bool> p(100000, true);
    for (int i = 0; getudo(i) < MX; ++i) {
        gl.push_back(getudo(i));
    }

    p[0] = false;
    int s = (int)gl.size();
    for (int i = 1; getudo(i) * getudo(i) < MX; ++i) {
        if (!p[i]) continue;
        for (int j = i+1; j < s; ++j) {
            if (getudo(j) % getudo(i) == 0) p[j] = false;
            if (getudo(j) < 100) {
            }
        }
    }

    vector<int> lst;
    rep (i, s) {
        if (p[i]) lst.push_back(getudo(i));
    }
    while (true) {
        int n;
        cin >> n;
        if (n == 1) break;

        printf("%d:", n);
        for (auto x : lst) {
            if (n % x == 0) printf(" %d", x);
            if (n < x) break;
        }
        cout << endl;
    }
    return 0;
}
