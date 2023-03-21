#include <iostream>
#include <fstream>
using namespace std;
int main (){
	setlocale(LC_ALL, "russian");
	
	ifstream fin("in.txt");
	int m[5], i=0, n=0;
	
	while (!fin.eof()){
		fin >> m[i];
		i++;
	}
	//каеф
	
	for (i=0;i<=4;i++){
		n=n+m[i];
	}
	cout << n << endl;
	fin.close();
	
	ofstream fout("bl.txt");
	fout << n;
	fout.close();
	
	
	
	
	system ("pause");
	return 0;
}
