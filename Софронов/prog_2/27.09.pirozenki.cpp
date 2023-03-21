#include <iostream>
using namespace std;
int main (){
	int m, n, k;
	cout << "m=";
	cin >> m;
	cout << endl << "n=";
	cin >> n;
	
	if ((m + n) % 3 == 0){
		k = (m + n) / 3;
		if (m>=k && n>=k){
			cout << endl <<  m-k << endl << n-k << endl;
		}
		else{
		cout << endl << "-1\n";
		}
	}
	else{
		cout << endl << "-1\n";
	} 
	
	
	
system ("pause");
return 0;	
}
