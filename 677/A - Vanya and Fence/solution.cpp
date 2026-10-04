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
 
    int n,h;
    cin >> n >> h;
    int arr[n];
    int cnt = 0;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        cnt += arr[i]>h ? 2 : 1;
    } 
    cout << cnt;
    return 0;
}