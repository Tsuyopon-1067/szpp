#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template <typename T> using MaxHeap = priority_queue<T>;
template <typename T> using MinHeap = priority_queue<T, vector<T>, greater<T>>;
template <typename T> bool chmin(T &a, const T &b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <typename T> bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define REP(j, i, n) for (ll i = j; i < (ll)(n); i++)
#define ff first
#define ss second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define all(a) a.begin(), a.end()
#define SZ(x) ((ll)(x).size())
const ll INF = 8e18;
const ll mod = 998244353;

vector<long long> fact, fact_inv, inv;
void init_nCk(int SIZE) {
    fact.resize(SIZE + 5);
    fact_inv.resize(SIZE + 5);
    inv.resize(SIZE + 5);
    fact[0] = fact[1] = 1;
    fact_inv[0] = fact_inv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < SIZE + 5; i++) {
        fact[i] = fact[i - 1] * i % mod;
        inv[i] = mod - inv[mod % i] * (mod / i) % mod;
        fact_inv[i] = fact_inv[i - 1] * inv[i] % mod;
    }
}
long long nCk(int n, int k) {
    assert(!(n < k));
    assert(!(n < 0 || k < 0));
    return fact[n] * (fact_inv[k] * fact_inv[n - k] % mod) % mod;
}

int main() {
    init_nCk(1e6 + 3);
    while (1) {
        ll n, k;
        cin >> n >> k;
        if (!n && !k) return 0;
        vector<ll> s(n), t(n);
        rep(i, n) cin >> s[i];
        rep(i, n) cin >> t[i];
        map<ll, ll> maap;
        rep(i, n) maap[s[i]] = i;
        set<pll> a;
        a.insert({0, n});
        //rep(j, n) {
            MinHeap<pair<ll, pll>> mp;
            mp.push({INF, {INF, INF}});
            for (auto c : a) {
                mp.push({s[c.ff], c});
            }
            rep(i, n) {
                auto v = mp.top();
                if (t[i] == v.ff) {
                mp.pop();
                    if (v.ss.ff + 1 < v.ss.ss)
                        mp.push({s[v.ss.ff + 1], {v.ss.ff + 1, v.ss.ss}});
                    continue;
                }
                ll m = maap[t[i]]; // pll?
                //t[i] no index wo mae ni
                auto it = a.lower_bound({m, 0});
                it--;
                a.erase(*it);
                pll aa = *it;
                if(aa.ff < m)a.insert({aa.ff, m});
                if(m < aa.ss)a.insert({m, aa.ss});
                if(m + 1 < aa.ss)mp.push({s[m+1], {m+1, aa.ss}});
            }
        //}

        MinHeap<pair<ll, pll>> mop;
        mop.push({INF, {INF, INF}});
        for (auto c : a) {
            mop.push({s[c.ff], c});
        }
        bool ppp = 0;
        rep(i, n) {
            auto v = mop.top();
            mop.pop();
            if (t[i] == v.ff) {
                if (v.ss.ff + 1 < v.ss.ss)
                    mop.push({s[v.ss.ff + 1], {v.ss.ff + 1, v.ss.ss}});
                continue;
            } else {
                ppp = 1;
                cout << 0 << endl;
                break;
            }
        }
        if (ppp) continue;

        if (a.size() > k) {
            cout << 0 << endl;
            continue;
        }
        ll ma = 0;
        ll kkk = k - a.size();
        ll x = 0;
        ll ans = 0;
        set<vector<ll>>uo;
        for (auto c : a) {
            vector<ll>j(0);
            for (ll i = c.ff; i < c.ss; i++) {
                j.push_back(s[i]);
            }
            uo.insert(j);
        }

        for (auto c : uo) {
            chmax(ma, c[0]);
            for (ll i = 1; i < c.size(); i++) {
                if (c[i] > ma) x++;
            }
        }

        rep(i, k - a.size() + 1) {
            if (i <= x) ans += nCk(x, i);
            ans %= mod;
        }
        cout << ans << endl;
    }
}
