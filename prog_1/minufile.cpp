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
	cout << "\n0-выход\n\n1-читать из файла\n2-ввести в фаил\n3-Удалить фаил\n4-Очистить фаил\n\n";
	cin >> exit;
	if (exit==1){
		cout << "введите полное имя фаила:\n";
		cin >> file;
		ifstream fin;
		fin.open(file.c_str());
		fin >> g;
		cout << g << endl;
		
		fin.close();
	}
/**	if(exit==2){
		cout << "введите полное имя фаила:\n";
		cin >> file;
		ofstream fout(file.c_str());
		cout << "Введите изменения:\n";**/
	if(exit==2){
		cout << "введите полное имя файла:\n";
		cin >> file;
		ofstream fout(file.c_str(), ios::app);
		cout << "Введите изменения:\n";
		int n=1;
		char ch[100];
		while (getch() != 27){
		gets(ch);
		fout << ch << '\n';
		}
		fout.close(); 
		}
	if(exit==3){
		cout << "введите полное имя файла:\n";
		cin >> file;
		if(remove(file.c_str())!=0){
			cout << "Ошибка\n";
		}
		else{
			cout << "Фэил успешно удален\n";
		}
	}
	
	if(exit==4){
		cout << "Введите имя фаила:\n";
		cin >> file;
		ofstream fout(file.c_str(), ios::trunc);
		fout.close();
	}
	}
	
	
	system ("pause");
	return 0;
}
