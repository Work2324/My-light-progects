#include <iostream>
using namespace std;
int main (){
	setlocale(LC_ALL, "Russian");
	int mves, kol, vesh, chem = 0, ruk = 0;
	cout << "���� ��� (�� ������ 10000) =";
	cin >> mves;
	cout << endl << "���-�� ��������� (�� ������ 100) =";
	cin >> kol;
	cout << endl;
	for (int i=1; i<=kol; i++){
		cout << "��� ���� =";
		cin >> vesh;
		cout << endl;
		if (vesh <= mves) {
			ruk  += vesh;
			mves -= vesh;
			}
		else 
			chem += vesh;
		}
	cout << "��� ������� =" <<ruk << endl << "��� �������� =" << chem << endl;
	
	system ("pause");
	return 0;
}
