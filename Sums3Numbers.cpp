#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b == c) {
		if (a > b) {
			cout << b << "+" << a << "=" << c << endl;
		}
		else if (b > a) {
			cout << a << "+" << b << "=" << c << endl;
		}
		else {
			cout << a << "+" << b << "=" << c << endl;
		}
	}
	else if (b+c==a) {
		if (b>c){
			cout << c << "+" << b << "=" << a << endl;
		}
		else if (c>b){
			cout << b << "+" << c << "=" << a << endl;
		}
		else{
			cout << b << "+" << c << "=" << a << endl;
		}
	}
	else if (c + a == b) {
		if (a > c) {
			cout << c << "+" << a << "=" << b<< endl;
		}
		else if (c > a) {
			cout << a << "+" << c << "=" << b << endl;
		}
		else{
			cout << a << "+" << c << "=" << b << endl;
		}
	}
	else{
		cout << "No" << endl;
	}
	return 0;
}