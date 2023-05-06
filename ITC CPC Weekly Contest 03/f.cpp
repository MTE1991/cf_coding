#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double 
#define tc(val) if (val) { ll t; cin >> t; while (t--) { solve(); } return 0;} else { solve(); return 0; }
using namespace std;

void solve() {
    while (true) {
        string s;
        getline(cin, s);
        if (s == "DONE") {
            break;
        } 
        // remove everything unnecessary from s
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        s.erase(remove(s.begin(), s.end(), '.'), s.end());
        s.erase(remove(s.begin(), s.end(), ','), s.end());
        s.erase(remove(s.begin(), s.end(), '!'), s.end());
        s.erase(remove(s.begin(), s.end(), '?'), s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string old_s = s;
        reverse(s.begin(), s.end());
        if (s == old_s) {
            cout << "You won't be eaten!\n";
        } else {
            cout << "Uh oh..\n";
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
