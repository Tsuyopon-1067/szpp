#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    int y = (h+1) / 2;
    int x = (w+1) / 2;

    int ans = y * x;
    
    if (h == 1 || w == 1) ans = h * w;

    cout << ans << endl;
    return 0;
}
