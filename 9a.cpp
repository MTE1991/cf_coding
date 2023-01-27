#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define tc(val) if (val) { int t; cin >> t; while (t--) { solve(); } return 0; } else { solve(); return 0; }
using namespace std;

void solve() {
    ll y, w;   // 1 2 3 4 5 6
    string dice[] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
    cin >> y >> w;
    cout << dice[6 - max(y, w)] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tc(0);
}
