#include <iostream>
using namespace std;
int main (){
	setlocale(LC_ALL, "Russian");
	int n, i , m, f=0, b=0, t=0;
	cout << "���-�� ����:\n";
	cin >> n;
	for (i=1;i<=n;i++){
		cout << "������� ����� ����:\n";
		cin >> m;
		if (m%3==0 && m%5!=0 && m%7!=0){
			f++;
		}
		if (m%5==0 && m%3!=0 && m%7!=0){
			b++;
		}
		if (m%7==0 && m%3!=0 && m%5!=0){
			t++;
		}
		}
	if (f>b && f>t){
		cout << "����� ��������� 1\n" << f << endl;
	}
	if (b>f && b>t){
		cout << "����� ��������� 2\n" << b << endl;
	}
	if (t>b && t>f){
		cout << "����� ��������� 3\n" << t << endl;
	}
	
	system ("pause");
	return 0;
}
