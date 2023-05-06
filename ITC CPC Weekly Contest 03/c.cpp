#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double 
#define tc(val) if (val) { ll t; cin >> t; while (t--) { solve(); } return 0;} else { solve(); return 0; }
using namespace std;

void solve() {
    string n1, n2;
    while (cin >> n1 >> n2) {
        if (n1 == "0" and n2 == "0") {
            break;
        } else {
            int carry = 0, count = 0;
            int i = n1.length() - 1;
            int j = n2.length() - 1;
            while (i >= 0 or j >= 0) {
                int dig1 = (i >= 0) ? n1[i--] - '0' : 0;
                int dig2 = (j >= 0) ? n2[j--] - '0' : 0;

                int sum = dig1 + dig2 + carry;

                if (sum >= 10) {
                    carry = 1;
                    count++;
                } else {
                    carry = 0;
                }
            }
            if (count == 0) {
                cout << "No carry operation.\n";
            } else if (count == 1) {
                cout << count << " carry operation.\n";
            } else {
                cout << count << " carry operations.\n";
            }
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
