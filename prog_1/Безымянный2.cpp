#include <iostream>
using namespace std;
int main () {
	setlocale(LC_ALL, "Russian");
	float x, w, z, a=0;
	cout << "введите первон. кол-во газа - "  << endl;
	cin >> x;
	cout << " процент потери газа в день - " << endl;
	cin >> w;
	cout << " пороговое значение потери газа ( в процентах) - " << endl;
	cin >> z;
	z = x / 100 * z;
	while (x > z) {
		x = x - (x / 100 * w);
		a++;
	}
	cout  << " число дней, без пополнения газа = " << a << endl;
		
		
	system ("pause");
	return 0;
}
