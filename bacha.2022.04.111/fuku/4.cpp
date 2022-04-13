#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b >= c) cout << b+c << endl;
    else cout << b + (a+b+1) << endl;
    return 0;
}
