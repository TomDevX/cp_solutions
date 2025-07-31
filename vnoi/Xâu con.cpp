/**
 *    author: TomDev - Tran Hoang Quan
 *    created: 2025-07-31 14:47:07
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

vector<int> zf(string s){
    int n = s.size();
    vector<int> z(n);
    for(int i = 1, l = 0, r = 0; i < n; i++){
        if(i <= r){
            z[i] = min(r-i+1,z[i-l]);
        }
        while(i < n && s[z[i]] == s[i + z[i]]) z[i]++;
        if(i + z[i] - 1 > r){
            l = i;
            r = i + z[i] - 1;
        }
    }
    return z;
}

int main(){
    fast();
    //setup();

    // z- func
    string a,b;
    cin >> a >> b;
    string t = b + '#' + a;
    int n = a.size(), m = b.size();
    vector<int> z = zf(t);

    for(int i = m + 1; i <= m + n; i++){
        if(z[i] == m) cout << i - m << ' ';
    }
}
