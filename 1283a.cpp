#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void solve() {
    ll hr, min, count = 0;
    cin >> hr >> min;
    do {
        if (min == 60) {
            min = 0;
            hr++;
        } else {
            min++;
            count++;
        }
    } while (hr < 24);
    cout << count << "\n";
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
