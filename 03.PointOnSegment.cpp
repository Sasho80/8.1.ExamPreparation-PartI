#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	int first, second, point;
	cin >> first >> second >> point;
	int left = min(first,second);
	int right = max(first,second);
	int distanceLeft = fabs(left-point);
	int distanceRight = fabs(right-point);
	int minDistance = min(distanceLeft,distanceRight);
	if (point>=left&&point<=right){
		cout << "in" << endl;
	}
	else{
		cout << "out" << endl;
	}
	cout << minDistance << endl;
	return 0;
}
