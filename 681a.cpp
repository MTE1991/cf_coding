//#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define tc(val) if (val) { int t; cin >> t; while (t--) { solve(); } return 0; } else { solve(); return 0; }
using namespace std;

void solve() {
    int n;
    bool flag = false;
    cin >> n;
    while (n--) {
        string s;
        int before, after;
        cin >> s >> before >> after;
        if (before >= 2400) {
            if (after > before) {
                flag = true;
            }
        }
    }
    if (flag) {
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
