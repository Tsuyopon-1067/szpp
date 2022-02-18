#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#define ll long long
#include <bits/stdc++.h>
using namespace std;

ll d8(ll n) { // (8) -> (10)
    ll res = 0;
    ll k = 1;
    while (n > 0) {
        res += ((n%10)* k);
        n /= 10;
        k *= 8;
    }
    return res;
}
ll d9(ll n) { // (10) -> (9)
    ll res = 0;
    ll k = 1;
    while (n > 0) {
        int a = n % 9;
        if (a == 8) a = 5;
        res += (a * k);
        n /= 9;
        k *= 10;
    }
    return res;
}
int main() {
    long long n, k;
    cin >> n >> k;

    rep (i, k) {
        n = d9(d8(n));
    }
    cout << n << endl;
    return 0;
}
