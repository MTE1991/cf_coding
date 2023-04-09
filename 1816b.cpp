#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long
#define ld long double 
#define tc(val) if (val) { ll t; cin >> t; while (t--) { solve(); } return 0;} else { solve(); return 0; }
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<vector<ll>> grid(2, vector<ll>(n, 0));
    grid[0][0] = 2*n;
    grid[1][n - 1] = 2*n - 1;
    ll l = 1, r = 2*n - 2;
    for (int i = 0; i < n - 1; i++) {
        if (i % 2) {
            grid[1][i] = r - 1;
            grid[0][i + 1] = r;
            r -= 2; 
        } else {
            grid[1][i] = l;
            grid[0][i + 1] = l + 1;
            l += 2;
        }
    }
    for (auto row : grid) {
        for (auto col : row) {
            cout << col << " ";
        }
        cout << "\n";
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
    tc(1);
}
