#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using ull = unsigned long long;
 
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
 
const ll MOD = 1e9 + 7;
const ll MX = 2e5 + 5;
const ll INF = 1e18;
 
constexpr int pct(int x) {
    return __builtin_popcount(x);
}
 
constexpr int bits(int x) {
    return x == 0 ? 0 : 31 - __builtin_clz(x);
}
 
signed main() {
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, s;
    cin >> n >> s;
    string q;
    cin >> q;
    while(s--){
        for(int i=0; i<n-1; i++){
            if(q[i]=='B' && q[i+1]=='G') {
                swap(q[i],q[i+1]);
                i++;
            }
        }
    }
   
    cout << q;
 
    return 0;
}