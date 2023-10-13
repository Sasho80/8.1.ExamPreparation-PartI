#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int count = 0;
	for (int left = -n; left < n; left++) {
		for (int top = -n; top < n; top++) {
			for (int right = left + 1; right <= n; right++) {
				for (int bottom = top + 1; bottom <= n; bottom++) {
					int area = fabs(right - left) * fabs(bottom - top);
					if (area >= m) {
						cout << "(" << left << ", " << top << ")" << " (" <<
							right << ", " << bottom << ") -> " << area << endl;
						count++;
					}
				}
			}
		}
	}
	if (count == 0) {
		cout << "No" << endl;
	}
	return 0;
}
