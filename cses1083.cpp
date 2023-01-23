/* https://cses.fi/problemset/task/1083 */

#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

// Collatz Conjecture
void solve() {
	ll n;
    cin >> n;
    cout << n << " ";
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3*n + 1;
        }
        cout << n << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//	int t;
//	cin >> t;
//	while (t--) {
		solve();
//	} 
}
