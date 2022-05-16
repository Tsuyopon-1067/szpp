#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#define ll long long
#include <bits/stdc++.h>
using namespace std;

ll d8(string n) { // (8) -> (10)
    ll res = 0;
    int d = n.length();
    rep (i, d) {
        res *= 8;
        res += (n[i] - '0');
    }
    return res;
}
string d9(ll n) { // (10) -> (9)
    string res = "";
    while (n > 0) {
        int a = n % 9;
        if (a == 8) a = 5;
        res = to_string(a) + res;
        n /= 9;
    }
    if (res == "") res = "0";
    return res;
}

int main() {
    string n;
    ll k;
    cin >> n >> k;
<<<<<<< HEAD

    rep (i, k) {
        n = d9(d8(n));

    }
=======
    rep (i, k) n = d9(d8(n));
>>>>>>> a98aa0ff411289f44ef1db9ba41fc114d0b22126
    cout << n << endl;
    return 0;
}
