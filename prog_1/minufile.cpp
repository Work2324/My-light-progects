#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
#include <cstdio>
//#include <time.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	int exit=5;
	string file, g, n;
	while(exit!=0){
	cout << "\n0-�����\n\n1-������ �� �����\n2-������ � ����\n3-������� ����\n4-�������� ����\n\n";
	cin >> exit;
	if (exit==1){
		cout << "������� ������ ��� �����:\n";
		cin >> file;
		ifstream fin;
		fin.open(file.c_str());
		fin >> g;
		cout << g << endl;
		
		fin.close();
	}
/**	if(exit==2){
		cout << "������� ������ ��� �����:\n";
		cin >> file;
		ofstream fout(file.c_str());
		cout << "������� ���������:\n";**/
	if(exit==2){
		cout << "������� ������ ��� �����:\n";
		cin >> file;
		ofstream fout(file.c_str(), ios::app);
		cout << "������� ���������:\n";
		int n=1;
		char ch[100];
		while (getch() != 27){
		gets(ch);
		fout << ch << '\n';
		}
		fout.close(); 
		}
	if(exit==3){
		cout << "������� ������ ��� �����:\n";
		cin >> file;
		if(remove(file.c_str())!=0){
			cout << "������\n";
		}
		else{
			cout << "���� ������� ������\n";
		}
	}
	
	if(exit==4){
		cout << "������� ��� �����:\n";
		cin >> file;
		ofstream fout(file.c_str(), ios::trunc);
		fout.close();
	}
	}
	
	
	system ("pause");
	return 0;
}
