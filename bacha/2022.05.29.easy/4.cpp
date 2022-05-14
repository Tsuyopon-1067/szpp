#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;

    long long ans = 0;
    long long n = s.length();
    for (long long i = 0; i < n-3; ++i) {
        string t = s.substr(i, 4);
        if (t == "ZONe") ++ans;
    }
    cout << ans << endl;
    return 0;
}
