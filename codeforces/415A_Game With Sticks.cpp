/**
 *    author: TomDev - Tran Hoang Quan
 *    created: 2025-07-21 01:15:57
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
    
    int n,m;
    cin >> n >> m;
    cout << (min(n,m)&1 ? "Akshat" : "Malvika");
}
