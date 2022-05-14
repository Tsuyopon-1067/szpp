#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
#define reps(i, s, n) for (long long i = (long long)(s); i < (long long)(n); ++i)
#define rrep(i, n) for (long long i = (long long)(n-1); i >= 0; --i)
#define MOD 1000000007
#define INF 2000000000
#define INFL 1000000000000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
template <typename T> long long count_digit(T n) { long long res = 0; while (n > 0) { ++res; n /= 10; } return res; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;
ll gcd(ll a, ll b) {
    if (a % b == 0) return b;
    else return gcd(b, a%b);
}
int main() {
    long long l, r;
    cin >> l >> r;
    while (1) {
        if (gcd(l, r) == 1) {
            cout << l - r << endl;
            return 0;
        }
        ++l;
        if (gcd(l, r) == 1) {
            cout << l - r << endl;
            return 0;
        }
        --l;
        --r;
        if (gcd(l, r) == 1) {
            cout << l - r << endl;
            return 0;
        }
        ++l;
        ++l;
    }
    
    return 0;
}
