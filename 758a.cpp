#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define tc(val) if (val) { int t; cin >> t; while (t--) { solve(); } return 0;} else { solve(); return 0; }
using namespace std;

void solve() {
    ll n, count = 0;
    cin >> n;
    vector<ll> welfare(n);
    for (int i = 0; i < n; i++) {
        cin >> welfare[i];
    }
    ll max_val = *max_element(welfare.begin(), welfare.end());
    for (const auto citizen : welfare) {
        count += (max_val - citizen);
    }
    cout << count << endl;
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
