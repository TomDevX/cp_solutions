/**
 *    author: TomDev - Tran Hoang Quan
 *    created: 2025-08-01 17:38:52
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

int MAXN = 1e7;
vector<int> sang(MAXN+1,1);

void sieve(){
    sang[0] = sang[1] = 0;
    for(int i = 2; i * i <= MAXN; i++){
        if(sang[i]){
            for(int j = i*i; j <= MAXN; j+=i){
                sang[j] = 0;
            }
        }
    }
}

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void setup(){
    freopen("number.INP", "r", stdin);
    freopen("number.OUT", "w", stdout);
}

int main(){
    fast();
    setup();

    sieve();
    long long l,r;
    cin >> l >> r;
    long long cnt = 0;
    for(long long i = ceil(sqrt(l)); i <= sqrt(r); i++){
        if(sang[i]) cnt++;
    }
    cout << cnt;
}
