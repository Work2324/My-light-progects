#include <iostream>
#include <fstream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	ofstream fout("rez.txt");
	fout << "������\n";
	fout << "��������))";
	fout.close();
	
	
	
	
	
	
	
	
	system ("pause");
	return 0;
}
