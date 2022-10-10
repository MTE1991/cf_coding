#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s1, s2;
    cin >> n;
    cin >> s1;
    cin >> s2;
    bool colorblind = true;
    for (int i=0; i<n; i++) {
        if (s1[i] != s2[i] and (s1[i]=='R' or s2[i]=='R')) {
                colorblind = false;
                break;
            }
        }
    if (colorblind)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}