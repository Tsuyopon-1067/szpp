#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
#define reps(i, s, n) for (long long i = (long long)(s); i < (long long)(n); ++i)
#define rrep(i, n) for (long long i = (long long)(n-1); i >= 0; --i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    vector<ll> flag(2*n+2, true);
    
    rep (i, n+1) {
        ll taka = 1;
        for (long long i = 1; i < 2*n+2; ++i) {
            if (flag[i]) {
                taka = i;
                flag[taka] = false;
                break;
            }
        }
        cout << taka << endl;

        ll ao;
        cin >> ao;
        flag[ao] = false;
    }
    
    return 0;
}
