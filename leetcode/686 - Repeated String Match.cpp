class Solution {
public:
    vector<int> pf(string s){
        int n = s.size();
        vector<int> pi(n);
        int j = 0;
        for(int i = 1; i < n; i++){
            while(j > 0 && s[j] != s[i]){
                j = pi[j-1];
            }
            if(s[j] == s[i]) j++;
            pi[i] = j;
        }
        return pi;
    }

    bool check(string a, string &b, vector<int> &pi){
        int n = b.size();
        int m = a.size();
        int j = 0;
        for(int i = 0; i < m; i++){
            while(j > 0 && b[j] != a[i]){
                j = pi[j-1];
            }
            if(b[j] == a[i]) j++;
            if(j == n) return true;
        }
        return false;
    }

    int repeatedStringMatch(string a, string b) {
        int n = b.size();
        vector<int> pi = pf(b);
        string cur = a;
        while(cur.size() < b.size()){
            cur += a;
        }

        if(check(cur,b,pi)) return cur.size()/a.size();
        if(check(cur+a,b,pi)) return cur.size()/a.size() + 1;
        return -1;
    }
};
