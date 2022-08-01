#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
typedef long double LD;

#define rep(i,n) for(LL i=0;i<(n);i++)

LL n, k;
string ans = "Nothing";

void search(vector<vector<LL>> &data,LL count, LL num){

    if(count == n){

        if(num == 0){
            ans = "Found";
        }

        return;
    }

    rep(i,k){

        if(count == 0){
            num = data[0][i];
        }
        else{
            num = (num ^ data[count][i]);
        }

        search(data,count+1,num);

    }
}

int main(){

    ans = "Nothing";
    cin >> n >> k;

    vector<vector<LL>> data(n, vector<LL>(k));
    rep (i, n) rep (j, k) cin >> data[i][j];

    search(data,0,0);

    cout << ans << endl;

    return 0;
}
