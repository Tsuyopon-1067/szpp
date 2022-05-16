#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll l, r;
    cin >> l >> r;

    ll k = 1;
    int d = 1;
    while (k <= r) {
        k *= 10;
        d++;
    }
    cout << k << endl;
    cout << d << endl;
    return 0;
}
