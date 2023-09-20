#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	int a = fabs(x2 - x3);
	int h = fabs(y2 - y1);
	double s = (double)h * a / 2;
	cout << s << endl;
	return 0;
}