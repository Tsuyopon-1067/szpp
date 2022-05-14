typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, x;
    cin >> n >> m >> x;
    vector<ll> a(m);
    for (auto &x : a) cin >> x;

    ll lcost = 0;
    while (a[lcost] < x) ++lcost;

    cout << min(lcost, m-lcost) << endl;

    return 0;
}
