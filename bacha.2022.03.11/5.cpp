#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> k(200001, 0);
    int min = 0;
    rep (i, n) {
        int p;
        cin >> p;
        k[p]++;
        while (k[min] != 0) ++min;
        cout << min << endl;
    }
    return 0;
}
