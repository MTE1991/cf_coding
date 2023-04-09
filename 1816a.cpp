#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long
#define ld long double 
#define tc(val) if (val) { ll t; cin >> t; while (t--) { solve(); } return 0;} else { solve(); return 0; }
using namespace std;

void solve() {
    ll a, b;
    cin >> a >> b;
    cout << 2 << endl;
    cout << 1 << " " << b - 1 << endl;
    cout << a << " " << b << endl;
} 

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tc(1);
}
