/*
Today is Little A's first day in college, of course the first day's thing is to sign in

According to the admission manual, he has to check in with his luggage first and then finally arrive at the dormitory.

He carries w pieces of luggage and needs to go to n locations for check-in. The enthusiastic seniors (one of them) at the i-th location will help Xiao A deliver ai pieces of luggage to the dormitory. Xiao A does not want to trouble too many people to help He, and at the same time, he was going to invite all the seniors and sisters who helped him carry his luggage to have a cup of milk tea.

Then, in the case that he can arrange the order of the check-in points, can you help him calculate the minimum number of cups of milk tea he needs to prepare to thank those who have helped him.
input

The first line integer T represents the number of all samples

In the next 2 * T lines, the first line of each two lines contains two integers n, w, and the second line contains n integers a1, a2, ...an

data guarantee
output

Output T lines, each line is an integer, indicating the minimum amount of milk tea that Little A needs to prepare
*/

#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double 
#define tc(val) if (val) { ll t; cin >> t; while (t--) { solve(); } return 0;} else { solve(); return 0; }
using namespace std;

void solve() {
    ll n, w;
    cin >> n >> w;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    ll total_luggage = 0;
    ll total_cups = 0;
    for (int i = 0; i < n; i++) {
        if (total_luggage < w) {
            total_luggage += a[i];
            total_cups++;
        } else {
            break;
        }
    }
    cout << total_cups << endl;
} 

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tc(1);
}
