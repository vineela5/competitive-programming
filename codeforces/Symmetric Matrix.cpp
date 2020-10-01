/*********************************************************************
Problem Link:
https://codeforces.com/contest/1426/problem/B
*********************************************************************/

#include <bits/stdc++.h>
using namespace std;
 
/*START OF CODE-TEMPLATE*/
 
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vi vector <int>
#define pii pair <int, int>
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define NEW_LINE "\n"
#define rep(i, a, b) for (int i = a; i < b; i++);
#define dbg(x) cout << "DBG >>> " << (x) << NEW_LINE;
 
// Computes the number of set-bits in the binary representation of n (64-Bit).
#define COMPUTE_SET_BITS(number) __builtin_popcountll(number)
 
// Computes the parity of the number n (64-Bit) i.e. parity is 0 if the number of set-bits is even otherwise odd.
#define COMPUTE_PARITY(number) __builtin_parity(number)
 
// Computes the number of leading zeroes in the binary representation of n (64-Bit). The value will be 64 - (number of bits required to represent n).
#define COMPUTE_LEADING_ZEROES(number) __builtin_clzll(number)
 
// Computes the number of trailing zeroes in the binary representation of n (64-Bit). The value will always be zeroe if n is odd.
#define COMPUTE_TRAILING_ZEROES(number) __builtin_ctzll(number)
 
/*END-OF CODE-TEMPLATE*/
 

int main() {
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a, b, c, d;
        bool symmetric = false;
        for (int i = 0; i < n; i++) {
            cin >> a >> b >> c >> d;
            if (b == c) symmetric = true;
        }
        if (m % 2) {
            cout << "NO" << NEW_LINE;
            continue;
        } 
        if (symmetric) {
            cout << "YES" << NEW_LINE;
        } else {
            cout << "NO" << NEW_LINE;
        }
    }
 
    return 0;
}
