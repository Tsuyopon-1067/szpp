#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b, c, s1, s2, s3;
    cin >> a >> b >> c;
    s1 = a + b;
    s2 = b + c;
    s3 = c + a;
    if (s2 < s1) s1 = s2;
    if (s3 < s1) s1 = s3;
    cout << s1 << endl;
    return 0;
}
