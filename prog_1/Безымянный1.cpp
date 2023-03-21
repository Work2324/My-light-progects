#include "stdafx.h"
#include  <iostream>
#include <cmath> 
using namespace std;
void a (){
	float x;
	cout << "input x:" ;
	cin >> x;
	cout << 2*x<< "\n" ;
}
void b (){
	float x;
	cout << "input x:" ;
	cin >> x ;
	cout << sin (x)<< "\n" ;
}
void v(){
	float a;
	cout << "input a:";
	cin >>a;
	cout <<a*a<< "\n"; 
}
void g(){
	float x;
	cout<< "input x:";
	cin >> x;
	cout << sqrt (x)<< "\n";
}
void d(){
	float n ;
	cout << "input n:";
	cin >> n ;
	cout << abs (n) << "\n" ;
}
void e(){
	float y ;
	cout << "input y:";
	cin >> y;
	cout <<5*sin (y) << "\n";
}
void j(){
	float a;
	cout << "input a:";
	cin >> a;
	cout << -7.5*(a*a) << "\n";
}
void z(){
	float x;
	cout << "input x:";
	cin >> x;
	cout << 3*sqrt(x) << "\n";	
}
void i(){
	float alpha, beta;
	cout << "input alpha:";
	cin >> alpha;
	cout << "input beta:";
	cin >> beta;
	cout << sin(alpha)*cos(beta)+sin(beta)*cos(alpha) << "\n";
}
void k(){
	float a,b;
	cout << "input a:";
	cin >> a;
	cout << "input b:";
	cin >> b;
	cout << a*sqrt(2*b);
}
void l(){
	float alpha, beta;
	cout << "input alpha:";
	cin >> alpha;
	cout << "input beta:";
	cin >> beta;
	cout << 3*sin(2*alpha)*cos(3*beta);
}
void m(){
	float x,y;
	cout << "input x:";
	cin >> x; 
	cout << "input y:";
	cin >> y;
	cout << -5*sqrt(x+sqrt(y));
}
int main(){
	setlocale(LC_ALL, "Russian");
	cout << "  minu" << endl;
	cout << "         \n";
	cout << " 1 - 2x\n 2 - sin x\n 3 - a*a\n 4 - sqrt x\n 5 - abs n\n 6 - 5sin x\n 7 - -7.5*(a*a)\n 8 - 3*sqrt(x)\n";
	cout << " 9 - sin(alpha)*cos(beta)+sin(beta)*cos(alpha)\n 10 - a*sqrt(2*b)\n 11 - 3*sin(2*alpha)*cos(3*beta)\n 12 --5*sqrt(x+sqrt(y))\n ";
	int count;
	cout << "выберете номер - ";
	cin >> count;
	swith (count) {
		case 1: 
			a();
			break;
		case 2:	
			b();
			break;
		case 3:
			v();
			break;
		case 4:
			g();
			break;
		case 5:
			d();
			break;
		case 6:
			e();
			break;
		case 7:
			j();
			break;
		case 8:
			z();
			break;
		case 9:
			i();
			break;
		case 10:
			k();
			break;
		case 11:
			l();
			break;
		case 12:
			m();
			break;
}
	
	system ("pause");
	return 0;
}
