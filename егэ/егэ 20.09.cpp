#include <iostream>
using namespace std;
int main(){
	int s, p, n=1;
	for (s=1; s<60; s++){
		p = s;
		n = 1;
		while (p < 51){
			p += 5;
			n *= 2;
		}
		if (n == 64){
			cout << s << endl;
		}
	}
	
	
	system ("pause");
	return 0;
}
