#include <iostream>
using namespace std;
int main () {
	int k, n, x;
	cout << "k = ";
	cin >> k;
	cout << endl << "n =";
	cin >> n;
	cout << endl;
	
	x = n % k;
	
	if (k-x < x){
		cout << endl <<  k - x;
	}
	else {
		cout << endl << x << endl;
	} 


system ("pause");
return 0;
}
