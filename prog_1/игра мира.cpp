#include <iostream>
using namespace std;
int main (){
	setlocale(LC_ALL, "Russian");
	int y, ostat=5, bag=40, x, stope=1;
	string c;
	cout << "Справка:\n Ваш бак вмешает до 40 л воды, остаток внем на данный момент 10л.";
	cout << "Чтобы доехать до назначаемого пункта, не обходимо 25 л лимонадика, а лучше полный бак.\n\n";
	while (stope==1){
		// меню игрю
		cout << "";
		cout << "выход - 0, азазаправка - 1\n";
		cin >> stope;
		if (stope == 0){
			exit(0);
		}
		
		// азазаправка
		cout << "Hi! Вам бензин водой разбавлять?\n";
		cout << " 1-да, пожалуйста\n 2-нет, воздержусь\n 3-можно дизель?\n";
		cin >> x;
		if (x==1){
			cout << "Сколько вам?\n";
			cin >> y;
			if (y+ostat<=bag){
				ostat+=y;
				cout << "Заправка прошла успещщщщщно. В вашем баке " << ostat << "л\n";	
			}
			else {
				ostat = bag;
				cout << "Вы перелили топливо.You are nut!Продолжаем путешествие?\n";
			}	
		}
		if (x==2){
			cout << "Жаль( . Сколько вам?\n";
			cin >> y;
			if (y+ostat<=bag){
				ostat+=y;
				cout << "Заправка прошла успещщщщщно. В вашем баке " << ostat << "л\n";	
			}
			else {
				ostat = bag;
				cout << "Вы перелили топливо.You are nut!Продолжаем путешествие?\n";
			}	
		}
		if (x==3){
			cout << "Ваш двигатель скорее всего заглохнет. вы уверены в своём выборе?(yes, no)\n";
			cin >> c;
			if (c=="yes"){
				cout << "\nСколько вам?\n";
				cin >> y;
				if (y+ostat<=bag){
					ostat+=y;
					cout << "Заправка прошла успещщщщщно. В вашем баке " << ostat << "л\n";	
				}
				else {
					ostat = bag;
					cout << "Вы перелили топливо.You are nut!Продолжаем путешествие?\n";
				}		
			}	
		}
	//закончится заправка
	
	
	
	
	
	
	
	
	
	
	

	}
	system ("pause");
	return 0;
}
