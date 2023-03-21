#include <iostream>
#include <cmath>
using namespace std;
void a () {
	float x;
	cout<<"vvedite x= ";
	cin>> x;
	cout << -1 / pow(x,2) <<endl;	
}
void b () {
float a,b,c;
cout<<"vvedite a,b,c= ";
cin>>a>>b>>c;
cout << a/b*c << endl;
}
void c (){
float a,b,c;
cout<<"vvedite a,b,c= ";
cin>>a>>b>>c;
cout<< (a/b)*c << endl;
}
void d (){
float a,b;
cout<<"vvedite a,b= ";
cin>>a>>b;
cout<< (a+b)/2	<< endl;
}
void e () {
float a,b;
cout<<"vvedite a,b= ";
cin>>a>>b;
cout<< 5.45 * ((a+2*b)/(2-a)) << endl;
}
void f () {
float a,b,c;
cout<<"vvedite a,b,c= ";
cin>>a>>b>>c;
cout<< (-b+sqrt(pow(b,2)-4*a*c))/2*a << endl;
}
void g () {
float a,b,c;
cout<<"vvedite ,b,c= ";
cin>>a>>b>>c;
cout<< (-b+(1/a))/(2/c) << endl;
}
system ("pause");
return 0;
