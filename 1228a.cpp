#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void solve() {
    ll l, r, ans = 0;
    string num; 
    bool unique = false;
    cin >> l >> r;
    for (int i = l; i < r + 1; i++) {
        num = to_string(i);
        set<int> s(num.begin(), num.end());
        if (s.size() == num.size()) {
            unique = true;
            ans = i;
            break;
        }
    }
    if (unique) {
        cout << ans << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
