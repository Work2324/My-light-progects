#include <iostream>
using namespace std;
int main (){
	setlocale(LC_ALL, "Russian");
	int mves, kol, vesh, chem = 0, ruk = 0;
	cout << "макс вес (не больше 10000) =";
	cin >> mves;
	cout << endl << "кол-во предметов (не больше 100) =";
	cin >> kol;
	cout << endl;
	for (int i=1; i<=kol; i++){
		cout << "вес вещи =";
		cin >> vesh;
		cout << endl;
		if (vesh <= mves) {
			ruk  += vesh;
			mves -= vesh;
			}
		else 
			chem += vesh;
		}
	cout << "вес рюкзака =" <<ruk << endl << "вес чемодана =" << chem << endl;
	
	system ("pause");
	return 0;
}
