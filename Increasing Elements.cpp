#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int countCurrentLongest = 0;
	int countLongest = 0;
	int aPrev = 0;
	int a;
	for (int i = 0; i < n; i++){
		cin >> a;
		if (a>aPrev){
			countCurrentLongest++;
		}
		else{
			countCurrentLongest = 1;
		}
		if (countCurrentLongest>countLongest){
			countLongest = countCurrentLongest;
		}
		aPrev = a;
	}
	cout << countLongest << endl;
	return 0;
}