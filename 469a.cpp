#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void solve() {
    ll array[500];
    ll n, p, q, count = 0;
    cin >> n >> p;
    for (int i = 0; i < p; i++){
        cin >> array[i];
    }
    cin >> q;
    for (int i = p; i < p + q; i++){
        cin >> array[i];
    }
    sort(array, array + (p + q));
    for (int i = 0; i < p + q; i++){
        if (array[i] != array[i + 1]){
            count++;
        }
    }
    if (n == count){
        cout << "I become the guy.\n";
    } else {
        cout << "Oh, my keyboard!\n";
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
