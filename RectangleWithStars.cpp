#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int numRow;
    //up part
	for (int i = 0; i < 2*n; i++){
		cout << "%";
	}
	cout << endl;
	//middle part
	if (n % 2 == 0) {
		numRow =n-1;
	}
	else{
		numRow = n;
	}
	for (int i = 0; i < numRow; i++) {
		cout << "%";
		if (i == ((n - 1) / 2) && (n % 2 == 0)) {
			for (int j = 0; j < (2 * n - 4) / 2; j++) {
				cout << " ";
			}
			cout << "**";
		for (int j = 0; j < (2 * n - 4) / 2; j++) {
			cout << " ";
		    }
	    }
		else if (i == (n / 2) && (n % 2 != 0)) {
			  for (int j = 0; j < (2 * n - 4)/2; j++) {
				  cout << " ";
			  }
			cout << "**";
			for (int j = 0; j < (2 * n - 4) / 2; j++) {
				cout << " ";
			 }
  		  }
		else {
			for (int j = 0; j <  2 * n - 2; j++) {
				cout << " ";
			}
		}
		cout <<"%";
		cout << endl;
	}
	// down part
	for (int i = 0; i < 2 * n; i++) {
		cout << "%";
	}
	cout << endl;
	return 0;
}