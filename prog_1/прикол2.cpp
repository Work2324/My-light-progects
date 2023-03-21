#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <math.h>
//#include <dos.h>
using namespace std;
int main (){
	setlocale(LC_ALL, "Russian");
	int n;
	string t;
	cin >> n;
	cout << "3 окрашенные стороны имеют 8 кубиков" << endl;
	cout << "2 окрашенные стороны имеют " << (n-2) * 12 << " кубиков\n";
	cout << "1 окрашенную сторону имеют " << (n * n - 4 - (n - 2) * 4 )* 6 << " кубиков\n";
	cout << "не окрашены " << pow((n-2), 3) << " кабиков" << endl;
	cin >>  t;
	sleep (5);
bool exit = false;

while(exit == false){
cout << " "; 
if (GetAsyncKeyState(VK_ESCAPE))
{
exit = true;
}
cout << t;
} 

	system ("pause");
	return 0;
}
