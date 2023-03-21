#include <iostream>
#include <cmath>
using namespace std;

	void A(){
		int x;
		cout << "input the number x =";
		cin >> x;
		cout << "2x=" << 2*x << endl;
	}
	
	void b(){
		int x;
		cout << "input the number x =";
		cin >> x;
		cout << "sin x=" << sin(x) << endl;                                                                                                                                                             
	}
                  
	void c(){
		int a;
		cout << "input the number a =";
		cin >> a;
		cout << "a^2=" << a*a << endl;
	}
	
	void d(){
		int x;
		cout << "input the number x =";
		cin >> x;
		cout << "sqrt x=" << sqrt (x) << endl;
	}
	
	void e(){
		int n;
		cout << "input the number n =";
		cin >> n;
		cout << "|n|=" << abs (n) << endl;
	}

	void f(){
		int y;
		cout << "input the number y =";
		cin >> y;
		cout << "5  cos y=h" << 5 * cos (y) << endl;
	}
	
	
	int main (){
		A();
		b();
		c();
		d();
		e();
		f();
	
	
	system ("pause");
	return 0;}

