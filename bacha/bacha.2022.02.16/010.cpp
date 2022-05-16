#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cl1; // point
    vector<int> cl2;
    map<int, int> clt1; // num
    map<int, int> clt2; // num
    vector<int> c(n);
    int k1 = 0;
    int k2 = 0;
    rep (i, n) {
        int ct, pt;
        cin >> ct >> pt;
        c[i] = ct;
        if (ct == 0) {
            clt1[i] = k1;
            cl1.push_back(pt);
            k1++;
        } else {
            clt2[i] = k2;
            cl2.push_back(pt);
            k2++;
        }
    }
    vector<int> cl_pi1(k1);
    vector<int> cl_pi2(k2);
    rep (i, k1) {
        if (i == 0) cl_pi1[0] = cl1[0];
        else cl_pi1[i] += cl_pi1[i-1];
    }
    rep (i, k2) {
        if (i == 0) cl_pi2[0] = cl2[0];
        else cl_pi2[i] += cl_pi2[i-1];
    }

    int q;
    cin >> q;
    rep (i, n) {
        int lt, rt;
        cin >> lt >> rt;
        int cls = c[l1]
    }


    return 0;
}
