#include <iostream>
using namespace std;
int main (){
	setlocale(LC_ALL, "Russian");
	int y, ostat=5, bag=40, x, stope=1;
	string c;
	cout << "�������:\n ��� ��� ������� �� 40 � ����, ������� ���� �� ������ ������ 10�.";
	cout << "����� ������� �� ������������ ������, �� �������� 25 � ����������, � ����� ������ ���.\n\n";
	while (stope==1){
		// ���� ����
		cout << "";
		cout << "����� - 0, ����������� - 1\n";
		cin >> stope;
		if (stope == 0){
			exit(0);
		}
		
		// �����������
		cout << "Hi! ��� ������ ����� ����������?\n";
		cout << " 1-��, ����������\n 2-���, ����������\n 3-����� ������?\n";
		cin >> x;
		if (x==1){
			cout << "������� ���?\n";
			cin >> y;
			if (y+ostat<=bag){
				ostat+=y;
				cout << "�������� ������ �����������. � ����� ���� " << ostat << "�\n";	
			}
			else {
				ostat = bag;
				cout << "�� �������� �������.You are nut!���������� �����������?\n";
			}	
		}
		if (x==2){
			cout << "����( . ������� ���?\n";
			cin >> y;
			if (y+ostat<=bag){
				ostat+=y;
				cout << "�������� ������ �����������. � ����� ���� " << ostat << "�\n";	
			}
			else {
				ostat = bag;
				cout << "�� �������� �������.You are nut!���������� �����������?\n";
			}	
		}
		if (x==3){
			cout << "��� ��������� ������ ����� ���������. �� ������� � ���� ������?(yes, no)\n";
			cin >> c;
			if (c=="yes"){
				cout << "\n������� ���?\n";
				cin >> y;
				if (y+ostat<=bag){
					ostat+=y;
					cout << "�������� ������ �����������. � ����� ���� " << ostat << "�\n";	
				}
				else {
					ostat = bag;
					cout << "�� �������� �������.You are nut!���������� �����������?\n";
				}		
			}	
		}
	//���������� ��������
	
	
	
	
	
	
	
	
	
	
	

	}
	system ("pause");
	return 0;
}
