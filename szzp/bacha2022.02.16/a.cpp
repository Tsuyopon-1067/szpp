#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = c * (b/c);
    if (ans < a) ans = -1;
    cout << ans << endl;
    return 0;
}
