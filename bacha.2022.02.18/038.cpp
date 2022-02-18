#include <bits/stdc++.h>
#include <numeric>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
    if (a % b == 0) return b;
    else return gcd(b, a%b);
}
int main() {
    ll a, b;
    cin >> a >> b;
    ll g = gcd(a, b);
    a /= g;
    b /= g;

    ll d = pow(10, 18);
    d /= g;
    d /= a;
    d /= b;
    if (d == 0) cout << "Large" << endl;
    else cout << g * a * b << endl;
    return 0;
}
