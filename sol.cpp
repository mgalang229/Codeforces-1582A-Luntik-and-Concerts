#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long a, b, c;
		cin >> a >> b >> c;
		// calculate the total minutes of all the songs
		long long sum = a + (2 * b) + (3 * c);
		// check if they can be divided exactly into two concerts
		// if not, then there is an extra minute in one of the two concerts
		cout << (sum % 2 == 0 ? 0 : 1) << '\n';
	}
	return 0;
}
