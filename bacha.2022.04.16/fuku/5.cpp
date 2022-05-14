typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    ll ec = (c-1)%4 + 1;
    ll db = (b-1) % 4 + 1;
    ll eb = ((ll)pow(db, ec)-1)%4 + 1;

    ll da = a % 10;
    ll ans = ((ll)pow(da, eb)) % 10;
    cout << ans << endl;
    return 0;
}
