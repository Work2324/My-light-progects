#include <iostream>
using namespace std;
int main(){
	int  d, n, s;
	for (d=1; d<=365; d++){
		s = 0;
		n = 0;
		while (s <= 365){
			s += d;
			n += 5;
		}
		if (n==55){
			cout << d << endl;
		}
	}
	
	
	
	
	
	
system ("pause");
return 0;
}

