#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int cd = (c-1) % 4 + 1;
    int bd = (b-1) % 4 + 1;
    bd = pow(bd, cd);
    bd = (bd-1)%4 + 1;

    int ans = a % 10;
    ans = pow(ans, bd);
    ans %= 10;
    cout << ans << endl;
    return 0;
}
