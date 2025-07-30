/**
 *    author: TomDev - Tran Hoang Quan
 *    created: 2025-07-25 17:18:57
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

int n,k;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void setup(){
    freopen("BAI.INP", "r", stdin);
    freopen("BAI.OUT", "w", stdout);
}

bool issorted(vector<int> &a){
    for(int i = 1; i < n; i++){
        if(a[i] < a[i-1]) return false;
    }
    return true;
}

int main(){
    fast();
    //setup();
    
    int tc;
    cin >> tc;
    int n;
    while(tc--){
        cin >> n;
        int x;
        for(int i =0 ; i < n; i++){
            cin >> x;
        }
        if(n & 1){
            cout << 4 << '\n';
            cout << 1 << ' ' << n-1 << '\n';
            cout << 1 << ' ' << n-1 << '\n';
            cout << n-1 << ' ' << n << '\n';
            cout << n-1 << ' ' << n << '\n';
        }
        else{
            cout << 2 << '\n';
            cout << 1 << ' ' << n << '\n';
            cout << 1 << ' ' << n << '\n';
        }
    }
}
