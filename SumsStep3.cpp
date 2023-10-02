#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	for (int i = 0; i < n; i++){
		int a;
		cin >> a;
		if (i%3==0){
			sum1 += a;
		}
		else if (i%3==1){
			sum2 += a;
		}
		else if (i%3==2){
			sum3 += a;
		}
	}
	cout << "sum1 = " << sum1 << endl;
	cout << "sum2 = " << sum2 << endl;
	cout << "sum3 = " << sum3 << endl;
	return 0;
}