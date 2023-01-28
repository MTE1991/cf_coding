#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define tc(val) if (val) { int t; cin >> t; while (t--) { solve(); } return 0;} else { solve(); return 0; }
using namespace std;

void solve() {
    ll n, count = 0;
    cin >> n;
    vector<ll> home(n), away(n);
    for (int i = 0; i < n; i++) {
        cin >> home[i] >> away[i];
    }
    for (const auto ht : home) {
        for (const auto at : away) {
            if (ht == at) count++;
        }
    }
    cout << count << "\n";
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
