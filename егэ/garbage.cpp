#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;
int main(){
	
	int n=6, answer, cost=0, temp, temp2=1, temp3=1, costmin=100;
	/**cout << "n = ";
	cin >> n;
	int m[n]={1, 2, 3, 4, 5};
	
	
	srand(time(0));
	for(int i=0;i<n;i++){
		m[i] = rand() % 100 + 1;
		printf("\nm[%d] = %d", i, m[i]);
	}**/
	
	/**ifstream fin("1.txt");
	
	fin >> n;
	int i = 0, m[n];
	
	while(!fin.eof()){
		fin >> m[i];
		i++;
	}**/
	
	int m[n]={8, 20, 5, 13, 7, 19};
	
	for (int i=0;i<n;i++){
		cost = 0;
		temp = 1;
		for(int k=1;k<=n/2;k++){
			
			temp2=i+k;
			temp3=i-k;
			if (temp2 > n-1){
				temp2=temp2-n;
			}
			if (temp3 < 0){
				temp3= temp3+n;
			}
			cost+=m[temp2]*temp;
			cost+=m[temp3]*temp;	
			temp++;
		}
		
		if (n%2==0){
			cost-=m[temp3]*temp;
		}
		
		if(cost < costmin){
			costmin = cost;
			answer = i;
		}
	}
	
	printf ("\nAnswer: near with %d\n", answer+1);
	
	
	
	system ("pause");
	return 0;
}
