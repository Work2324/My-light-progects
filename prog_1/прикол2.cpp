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
	cout << "3 ���������� ������� ����� 8 �������" << endl;
	cout << "2 ���������� ������� ����� " << (n-2) * 12 << " �������\n";
	cout << "1 ���������� ������� ����� " << (n * n - 4 - (n - 2) * 4 )* 6 << " �������\n";
	cout << "�� �������� " << pow((n-2), 3) << " �������" << endl;
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
