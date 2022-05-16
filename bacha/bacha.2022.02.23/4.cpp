#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    priority_queue<int, vector<int>, greater<int>> a;
    int fr = -1;
    rep (i, q) {
        int query;
        cin >> query;
        switch (query) {
            case 1:
                int x;
                cin >> x;

                if (a.size() == 0) fr = x;
                a.push(x);
                break;
            case 2:
                cout << fr << endl;
                a.pop();
                fr = a.top();
                break;
            case 3:
                fr = a.top();
                break;
        }
    }
    return 0;
}
