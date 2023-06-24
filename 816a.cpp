#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define tc(val) if (val) { int t; cin >> t; while (t--) { solve(); } return 0;} else { solve(); return 0; }
using namespace std;

void solve() {
    int hr, min, count = 0;
    cin >> hr;
    cin.ignore();
    cin >> min;
    while (hr / 10 != min % 10 or min / 10 != hr % 10) {
        min++;
        count++;
        if (min == 60) {
            min -= 60;
            hr++;
        }
        if (hr == 24) {
            hr -= 24;
        }
    }
    cout << count << endl;
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
