#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int counter = 0;
	for (int i = a; i <=b; i++){
		for  (int j = i+1; j <=b; j++){
			for ( int k = j+1; k <=b; k++){
				for (int l = k+1; l <=b; l++){
					cout << i << " " << j << " " << k << " " << l << endl;
					counter++;
				}
			}
		}
	}
	if (counter==0){
		cout << "No" << endl;
	}
	return 0;
}
