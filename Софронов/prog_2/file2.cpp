#include <iostream>
#include <fstream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	ofstream fout("rez.txt");
	fout << "прувет\n";
	fout << "пруветик))";
	fout.close();
	
	
	
	
	
	
	
	
	system ("pause");
	return 0;
}
