#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void uppercase(string &s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }
}

void lowercase(string &s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
}

void solve() {
    ll upper = 0;
    string s;
    cin >> s;
    for (auto c:s) {
        if (c >= 65 and c <= 90) {
            upper++;
        }
    }
    ll lower = s.length() - upper;
    if (upper > lower) {
        uppercase(s);
        cout << s << endl;
    } else {
        lowercase(s);
        cout << s << endl;
    }
}

int main() {
//    ll t;
//    cin >> t;
//    while (t--) {
        solve();
//    }
    return 0;
}
