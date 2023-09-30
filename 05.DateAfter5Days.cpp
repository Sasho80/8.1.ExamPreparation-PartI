#include <iostream>
#include <string>
using namespace std;
int main() {
	int d, m;
	cin >> d >> m;
	int daysInMonth = 31;
	if (m==2){
		daysInMonth = 28;
	}
	if (m==4||m==6||m==9||m==11){
		daysInMonth = 30;
	}
	d += 5;
	if (d>daysInMonth){
		d -= daysInMonth;
		m++;
		if (m > 12) {
			m = 1;
		}
	}
	if (m<=9){
		cout << d << ".0" << m << endl;
	}
	else{
		cout << d << "." << m << endl;
	}
	return 0;
}
