#include <iostream>
using namespace std;
int main() {
	int x, y;
	cin >> x>>y;
	bool pointInRect1 = x >= 2 && x <= 12 && y >= -3 && y <= 1;
	bool pointInRect2 = x >= 4 && x <= 10 && y >= -5 && y <= 3;
	if (pointInRect1||pointInRect2){
		cout << "in" << endl;
	}
	else{
		cout << "out" << endl;
	}
	return 0;
}
