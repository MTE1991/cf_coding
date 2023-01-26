#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define tc(val) if (val) { int t; cin >> t; while (t--) { solve(); } return 0;} else { solve(); return 0; }
using namespace std;

void solve() {
    int n, maximum = 0;
    string s;
    cin >> n;
    cin >> s;
    for (auto c : s)  {
        if (c > maximum) {
            maximum = c;
        }
    }
    cout << maximum - 96 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tc(1);
}
