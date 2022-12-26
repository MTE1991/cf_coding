#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void solve(ll &c) {
    ll p, q;
    cin >> p >> q;
    if (q - p >= 2) {
        c++;
    }
}

int main() {
    ll t, count = 0;
    cin >> t;
    while (t--) {
        solve(count);
    }
    cout << count << endl;
    return 0;
}
