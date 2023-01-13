#include <bits/stdc++.h>
#define ll long long int
#define ld long double
using namespace std;

/*
Caesar cipher:
E(n) = (x + n) mod 26 
D(n) = (x - n) mod 26

(For decoding, new value of shift = 26 - shift)
*/

string encode(string str, ll shift) {
    string result = "";
    for (auto c : str) {
        if (isupper(c)) {
            result += char(int( (c + shift) - 65 ) % 26 + 65);
        } else {
            result += char(int( (c + shift) - 97 ) % 26 + 97);
        }
    }
    return result;
}

void solve() {
    ll k;
    string s;
    cin >> s;
    cin >> k;
    cout << encode(s, k) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    ll t;
//    cin >> t;
//    while (t--) {
        solve();
//    }
    return 0;
}
