#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long odd = 0;
    for (long long i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        if (a % 2 == 1) ++odd;
    }
    cout << (odd % 2 == 0 ? "YES" : "NO") << endl;
    return 0;
}
