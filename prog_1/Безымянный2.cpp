#include <iostream>
using namespace std;
int main () {
	setlocale(LC_ALL, "Russian");
	float x, w, z, a=0;
	cout << "������� ������. ���-�� ���� - "  << endl;
	cin >> x;
	cout << " ������� ������ ���� � ���� - " << endl;
	cin >> w;
	cout << " ��������� �������� ������ ���� ( � ���������) - " << endl;
	cin >> z;
	z = x / 100 * z;
	while (x > z) {
		x = x - (x / 100 * w);
		a++;
	}
	cout  << " ����� ����, ��� ���������� ���� = " << a << endl;
		
		
	system ("pause");
	return 0;
}
