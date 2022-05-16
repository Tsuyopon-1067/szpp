#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<ll> ng(3);
    for (auto &x : ng) cin >> x;
    
    string ans = "NO";
    rep (i, 100) {
        if (find(ng.begin(), ng.end(), n) != ng.end()) break;
        if (find(ng.begin(), ng.end(), n-3) == ng.end()) {
            n -= 3;
        } else if (find(ng.begin(), ng.end(), n-2) == ng.end()) {
            n -= 2;
        } else if (find(ng.begin(), ng.end(), n-1) == ng.end()) {
            n -= 1;
        }
        if (n <= 0) ans = "YES";
    }
    cout << ans << endl;
    return 0;
}
