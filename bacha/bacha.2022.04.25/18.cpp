#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<ll> l(87);
    l[0] = 2;
    l[1] = 1;

    reps (i, 2, n+1) l[i] = l[i-1] + l[i-2];
    cout << l[n] << endl;
    return 0;
}
