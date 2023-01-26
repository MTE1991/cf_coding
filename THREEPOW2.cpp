#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define tc(val) if (val) { int t; cin >> t; while (t--) { solve(); } return 0; } else { solve(); return 0; }
using namespace std;

void solve() {
    ll n, ones = 0;
    string s;
    cin >> n;
    cin >> s;
    for (auto c : s) {
        if (c == '1') {
            ones++;
        }
    }
    if (s == "1" or s == "10") {
        cout << "NO\n";
    } else if (ones <= 3) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tc(1);
}
