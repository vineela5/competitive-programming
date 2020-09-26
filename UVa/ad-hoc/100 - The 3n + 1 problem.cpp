/*******************************************************************************
Problem Link:
https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=36
********************************************************************************/


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
    int i, j;
    while ((cin >> i >> j)) {
        int max_count = 0;
        for (int k = min(i,j); k <= max(i,j); k++) {
            int count = 1;
            int n = k;
            while (n != 1) {
                if (n % 2) {
                    n = 3 * n + 1;
                } else {
                    n = n / 2;
                }
                count++;
            }
            if (count > max_count) {
                max_count = count;
            }
        }
        cout << i << " " << j << " " << max_count << NEW_LINE;
    }

    return 0;
}
