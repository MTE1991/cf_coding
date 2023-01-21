#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
using namespace std;

void solve() {
    string s, s1 = "", s2 = "";
    cin >> s;
    for (int i = 0; i < s.length() / 2; i++) {
        s1 += s[i];
    }
    for (int i = s.length() / 2; i < s.length(); i++) {
        s2 += s[i];
    }
    if (s1 == s2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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
