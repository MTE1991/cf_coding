#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve() {
	string s1, s2, s3 = "";
    cin >> s1;
    cin >> s2;
    int j = 0;
    for (auto bit : s1) {
        if (bit != s2[j]) {
            s3 += '1';
            j++;
        } else {
            s3 += '0';
            j++;
        }
    }
    cout << s3 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//	int t;
//	cin >> t;
//	while (t--) {
		solve();
//	}
    return 0;
}
