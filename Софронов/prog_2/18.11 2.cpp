#include <iostream>
using namespace std;
int main (){
	float V, V1, V2, S1, S, t=0.5;
	cout << "V1.V2\n";
	cin >> V1 >> V2 >> S1;
	V=V2-V1;
	cout << V;
	S=V*(S1/V+t);
	
	cout << S << endl;
	
	
	
	
	
	system ("pause");
	return 0;
}

