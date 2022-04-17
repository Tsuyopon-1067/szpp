#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; 
    string t;
    cin >> t;

    reps (k-1, i, n) {
        if ('a' <= t[i] && t[i] <= 'z') t[i] = t[i] - 'a' + 'A';
        else t[i] = t[i] - 'A' + 'a';
    }
    cout << t << endl;
    return 0;
}
