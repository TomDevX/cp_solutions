/**
 *    author: TomDev - Tran Hoang Quan
 *    created: 2025-08-01 18:10:10
 *    done in: <none>
 *    country: Vietnam
 **/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <utility>

#define all(x) x.begin(),x.end()

using namespace std;

const long long MOD = 25071987;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void setup(){
    freopen("dpgame.INP", "r", stdin);
    freopen("dpgame.OUT", "w", stdout);
}

int main(){
    fast();
    setup();

    int n,k;
    cin >> n >> k;
    vector<long long> dp(n+1);
    dp[1] = 1;
    int x;

    for(int i = 0; i < k; i++){
        cin >> x;
        dp[x] = -1;
    }

    for(int i = 2; i <= n; i++){
        if(dp[i] == -1) continue;
        if(dp[i-1] != -1){
            dp[i] = dp[i-1];
        }
        if(dp[i-2] != -1){
            dp[i] = (dp[i] + dp[i-2])%MOD;
        }
    }
    cout << max(0LL,dp[n]);
}
