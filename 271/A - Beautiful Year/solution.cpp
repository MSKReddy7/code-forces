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
 
bool isBeautiful(int a){
    int mask = 0;
 
    while(a){
        if(mask>>(a%10) & 1) return false;
        mask |= 1 << (a%10);
        a/=10;
    }
 
   return true;
}
 
signed main() {
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int a;
    cin >> a;
    
    while(!isBeautiful(++a));
 
    cout << a;
 
    return 0;
}