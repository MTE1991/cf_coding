#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double 
#define tc(val) if (val) { ll t; cin >> t; while (t--) { solve(); } return 0;} else { solve(); return 0; }
using namespace std;

void solve() {
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int len = s.length();
        if (s == "1" or s == "4" or s == "78") {
            cout << "+\n";
        } else if (s.substr(len - 2) == "35") {
            cout << "-\n";
        } else if (s[0] == '9' and s.substr(len - 1) == "4") {
            cout << "*\n";
        } else if (s.substr(0, 3) == "190" and len > 3) {
            cout << "?\n";
        }
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
    tc(0);
}
