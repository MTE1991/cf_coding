#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double 
#define tc(val) if (val) { ll t; cin >> t; while (t--) { solve(); } return 0;} else { solve(); return 0; }
using namespace std;

void solve() {
    ll n, total = 0;
    cin >> n;
    string q;
    for (int i = 0; i < n; i++) {
        cin >> q;
        if (q == "donate") {
            ll money;
            cin >> money;
            total += money;
        } else if (q == "report") {
            cout << total << "\n";
        }
    }
} 

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tc(0);
}
