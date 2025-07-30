/**
 *    author: TomDev - Tran Hoang Quan
 *    created: 2025-07-29 21:31:57
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

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void setup(){
    freopen("BAI.INP", "r", stdin);
    freopen("BAI.OUT", "w", stdout);
}

int main(){
    fast();
    //setup();

    int tc;
    cin >> tc;
    int n,ed;
    while(tc--){
        cin >> n >> ed;
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sort(all(a));
        a.push_back(ed);
        int res = 0;
        for(int i = 1; i <= n+1; i++){
            if(i == n+1) res = max(res,2*(a[i] - a[i-1]));
            else res = max(res,a[i] - a[i-1]);
        }
        for(int i = n; i > 0; i--){
            res = max(res,a[i] - a[i-1]);
        }
        cout << res << '\n';
    }
}
