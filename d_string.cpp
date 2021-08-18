#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
	string a, b, c;
	
	getline(cin, a);
	getline(cin, b);
	
	c = a + b;
	
	cout << c << endl;
	
	swap(a[0],b[b.length()]);
	
	cout << a << " " << b << endl;
	
	return 0;
}
