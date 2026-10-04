#include <bits/stdc++.h>
using namespace std;
 
const int n = 1e6 + 1;
vector<int> sieve(n, 1);
 
void make()
{
    sieve[0] = 0;
    sieve[1] = 0;
    for (long long i = 2; 1LL * i * i < n; i++)
    {
        if (sieve[i])
        {
            for (long long j = 1LL * i * i; j < n; j += i)
            {
                sieve[j] = 0;
            }
        }
    }
}
 
int main()
{
    int t;
    cin >> t;
    make();
    while (t--)
    {
        long long a;
        cin >> a;
        
        long long root = sqrt(a);
 
        if(root*root == a && sieve[root])
            cout << "YES";
        else 
            cout << "NO";
        cout << '
';
    }
    
}