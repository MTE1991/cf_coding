#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
using namespace std;

void solve() {
    ull n;
    set<ull> s;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++) {
        s.insert(i * i);
    }
    for (int i = 1; i <= cbrt(n); i++) {
        s.insert(i * i * i);
    }
    cout << s.size() << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
