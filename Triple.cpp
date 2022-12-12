// https://codeforces.com/contest/1669/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
	vector<long long int> arr;
	long long int n, found = -1;

	cin >> n;

	for (int i=0; i<n; i++) {
		long long int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	} 
	
	unordered_map<long long int, long long int> mp;

	for (int i = 0; i < n; i++) {
		mp[arr[i]]++;
	}

	for (auto i : mp) {
		if (i.second >= 3) {
			found = i.first;
			break;
		}
	}

	cout << found << endl;
}

int main() {
	long long int t;
	cin >> t;
	while (t--) {
		solve();
	} 
}