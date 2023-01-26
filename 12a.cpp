#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define tc(val) if (val) { int t; cin >> t; while (t--) { solve(); } return 0; } else { solve(); return 0; }
using namespace std;

void solve() {
    ll matrix[3][3];
    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        matrix[i][0] = s[0];
        matrix[i][1] = s[1];
        matrix[i][2] = s[2];
    }
    if (
        matrix[0][0] == matrix[2][2] and
        matrix[0][1] == matrix[2][1] and
        matrix[0][2] == matrix[2][0] and
        matrix[1][0] == matrix[1][2]
    ) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tc(0);
}
