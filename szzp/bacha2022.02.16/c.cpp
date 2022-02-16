#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, d3, d6, d9, d12, d15, ans;
    cin >> n;
    d3 = pow(10, 3);
    d6 = pow(10, 6);
    d9 = pow(10, 9);
    d12 = pow(10, 12);
    d15 = pow(10, 15);

    ans = 0;
    if (d15 <= n) ans += (n-d15+1);
    if (d12 <= n) ans += (n-d12+1);
    if (d9 <= n) ans += (n-d9+1);
    if (d6 <= n) ans += (n-d6+1);
    if (d3 <= n) ans += (n-d3+1);

    cout << ans << endl;

    return 0;
}
