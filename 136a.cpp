#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define tc(val) if (val) { int t; cin >> t; while (t--) { solve(); } return 0;} else { solve(); return 0; }
using namespace std;

void solve() {
    ll n;
    cin >> n;
    map<ll, ll> p;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        p[tmp] = i + 1;
    }
    for (auto [key, value] : p) {
        cout << value << " ";
    }
    cout << "\n";
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
