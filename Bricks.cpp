#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x, w, m;
	cin >> x >> w>>m;
	int bricksInOneCourse = w * m;
	int totalCourses= x / bricksInOneCourse;
	if (totalCourses*bricksInOneCourse==x){
		cout << totalCourses << endl;
	}
	else if (totalCourses * bricksInOneCourse != x) {
		double totalCourses = ceil((double)x / bricksInOneCourse);
		cout << totalCourses << endl;
	}
	return 0;
}