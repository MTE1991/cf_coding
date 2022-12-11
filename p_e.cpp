//problem e
#include <bits/stdc++.h>
using namespace std;

void solve() {
	double x1, x2, y1, y2;
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;
	double d = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	cout << setprecision(17) << d << endl;
}

int main() {
    solve();
	return 0;
}