#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define ff first
#define ss second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pi 3.14159265359

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> gra(n, vector<ll>(n));
    rep (i, n) rep (j, n) { 
        gra[i][j] = 4;
    }
    cout << "aa" << endl;
    ll a, b;
    rep(i, m) {
        cin >> a >> b;
        gra[a - 1][b - 1] = 1;
        gra[b - 1][a - 1] = 1;
    }
    ll count;
    ll res = 0;
    for(ll i = 1; i < n; i++) {
        count = 0;
        for(ll j = 0; j < i; j++) {
            if(gra[i][j] == 1) count++;
        }
        if(count == 1) res++;
    }
    cout << res << '\n';
    return EXIT_SUCCESS;
}
