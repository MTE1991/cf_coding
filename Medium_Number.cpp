// Medium number codeforces 

#include <bits/stdc++.h>
using namespace std;

void solve() {
	vector<int> nums;
	for (int i=0; i<3; i++) {
		int tmp;
		cin >> tmp;
		nums.push_back(tmp);
	}
	sort(nums.begin(), nums.end());
	cout << nums[1] << endl;
}

int main() {
	int t;
	cin >> t;
	for (int i=0; i<t; i++) {
		solve();
	}
	return 0;
}
