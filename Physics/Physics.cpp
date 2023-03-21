#include <iostream>
#include "Formulas.h"
#include <windows.h>
#include <conio.h>
#include <fstream>
#include "Formulas2.h"
#include "Formulas3.h"
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	int exit = 1, exit2 = 1, exit3 = 1, o=0, i = 0;
	float  Ft, F, m, V, po, a, b, p, t, S, h, pg, Fa, k, dl, Fy, A, N, M, l;
	char help[50];
	char ch[100];
	Formulas* form = new Formulas();
	Formulas2* form2 = new Formulas2();
	Formulas3* form3 = new Formulas3();
	while (exit != 0){
		if(i == 0){
			cout << "\nПривет. Я постараюсь помочь тебе с физикой.\n";
			i++;
		}
		cout << "Выбери один из предложеных вариантов\n\n0-Выход\n1-Fт=mg\n2-m=Vp\n3-S=Vt\n4-Fa=pжgVт\n5-Fy=k*dl\n6-S=ab\n7-p=pжgh\n8-p=F/S\n9-A=FS\n10-N=A/t\n11-N=FV\n12-M=Fl\n13-Помощь с формулами и обозначениями\n";
		cin >> exit;
		
		if (exit == 1){
			system ("CLS");
			cout << "\nЧто именно посчитать?\n1-Fт=mg\n2-m=Fт/g\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "Введите массу тела (кг) = ";
			cin >> m;
			Ft = form->gravity(m);
			cout << "Ответ: Ft = " << Ft << "Н" << endl;
			}
			if (exit3 == 2){
				cout << "Введите силу тяжести (Н) = ";
				cin >> Ft;
				m = form2->mFtg(Ft);
				cout << "Ответ: m = " << m << "кг";
			}
			if (exit3 < 1 || exit3 > 2 ){
				cout << "\nТакого варианта нет.\n";
			}
		}
		
		if (exit == 2){
			system ("ClS");
			cout << "\nЧто именно посчитать?\n1-m=Vp\n2-V=m/p\n3-p=m/V\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "Введите объем тела (м куб) = ";
			cin >> V;
			cout << "Введите плотность вещества (кг/м куб) = ";
			cin >> po;
			m = form->mVp(V, po);
			cout << "Ответ: m = " << m << "кг\n";
			}
			if (exit3 == 2){
				cout << "Введите массу тела (кг) = ";
				cin >> m;
				cout << "Введите плотность тела (кг/м^3) = ";
				cin >> po;
				V = form2->Vmpo(m, po);
				cout << "V = " << V << "м^3\n";
			}
			if (exit3 == 3){
				cout << "Введите массу тела (кг) = ";
				cin >> m;
				cout << "Введите объём тела (м^3) = ";
				cin >> V;
				po = form3->pomV(m, V);
				cout << "po = " << po << "кг/м^3\n";
			}
			if (exit3 < 1 || exit3 > 3){
				cout << "Такого варианта нет\n";
			}
		}
		
		if (exit == 3){
			system ("CLS");
			cout << "Что иммено найти?\n1-S=Vt\n2-V=S/t\n3-t=S/V\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "Введите скорость (км/ч) = ";
			cin >> V;
			cout << "Введите время (ч) = ";
			cin >>  t;
			S = form->SVt(V, t);
			cout << "Ответ: S = " << S << "км\n";
			}
			if (exit3 == 2){
				cout << "Введите путь (м) = ";
				cin >> S;
				cout << "Введите время (с) = ";
				cin >> t;
				V = form2->VSt(S, t);
				cout << "V = " << V << "м/с\n";
			}
			if (exit3 == 3){
				cout << "Введите путь (м) = ";
				cin >> S;
				cout << "Введите скорость (м/с) = ";
				cin >> V;
				t = form3->tSV(S, V);
				cout << "t = " << t << "с\n";
			}
			if (exit3 < 1 || exit3 > 3){
				cout << "Такого варинта нет.\n";
			}
		}
		
		if (exit == 4){
			system ("CLS");
			cout << "Что именно посчитать?\n1-Fa=pжgVт\n2-pж=Fa/(Vтg)\n3-Vт=Fa/(pжg)\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "Введите плотнсть жидкости (кг/м куб) = ";
				cin >> pg;
				cout << "Введите объем погруженной части тела (м куб) = ";
				cin >> V;
				Fa = form->FapggV(pg, V);
				cout << "Ответ: Fa = " << Fa << "H\n" << endl;	
			}
			if (exit3 == 2){
				cout << "Введите Архимедову силу (H) = ";
				cin >> Fa;
				cout << "Введите объём погруженой части тела (м^3) = ";
				cin >> V;
				po = form3->pgFaVg(Fa, V);
				cout << "pж = " << po << "кг/м^3\n";
			}
			if (exit3 == 3){
				cout << "Введите Архимедову силу (Н) = ";
				cin >> Fa;
				cout << "Введите плотность жидкости (кг/м^3) = ";
				cin >> po;
				V = form2->VFapgg(Fa, po);
				cout << "V = " << V << "м^3\n";
				
			}
			
		}
		
		if (exit == 5){
			system ("CLS");
			cout << "Что именно посчитать?\n1-Fy=k*dl\n2-k=Fy/dl\n3-dl=Fy/k\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "Введите жесткость (Н/м) = ";
				cin >> k;
				cout << "Введите удлинение (м) = ";
				cin >> dl;
				Fy = form->Fykdl(k, dl);
				cout << "Ответ: Fy = " << Fy << "H\n";
			}
			if (exit3 == 2){
				cout << "Введите силу упругости (H) = ";
				cin >> Fy;
				cout << "Введите удлинение (м) = ";
				cin >> dl;
				k = form2->kFydl(Fy, dl);
				cout << "k = " << k << "Н/м\n";
			}
			if (exit3 == 3){
				cout << "Введите силу упругости (H) = ";
				cin >> Fy;
				cout << "Введите жесткость (Н/м) = ";
				cin >> k;
				dl = form3->dlFyk(Fy, k);
				cout << "dl = " << dl << "м\n";
			}
			if (exit < 0 || exit3 > 3){
				cout << "Такого варианто нет\n";
			}
		}
		
		if (exit == 6){
			system ("CLS");
			cout << "Что иммено посчитать?\n1-S=ab\n2-a=S/b\n3-b=S/a\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "Введите стороны a и b (м) = ";
				cin >> a, b;
				S = form->Sab(a, b);
				cout << "S = " << S << "м^2\n";
			}
			if (exit3 == 2){
				cout << "Введите площадь (м^2) = ";
				cin >> S;
				cout << "Введите одну из сторон (м) = ";
				cin >> b;
				a = form2->aSb(S, b);
				cout << "Другая сторона = " << a << "м\n";
			}
			if (exit < 0 || exit3 > 2){
				cout << "Такого варианто нет\n";
			}
		}
		
		if (exit == 7){
			system ("CLS");
			cout << "Что именно посчитать?\n1-p=pжgh\n2-pж=p/(gh)\n3-h=p/(pжg)\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "Введите плотность жидкости (кг/м^3) = ";
				cin >> po;
				cout << "Введите глубину (м) = ";
				cin >> h;
				p = form->ppggh(po, h);
				cout << "p = " << p << "Па\n";
			}
			if (exit3 == 2){
				cout << "Введите давление (Па) = ";
				cin >> p;
				cout << "Введите глубину (м) = ";
				cin >> h;
				po = form2->pgpgh(p, h);
				cout << "p = " << p << "кг/м^3\n";
			}
			if (exit3 == 3){
				cout << "Введите давление (Па) = ";
				cin >> p;
				cout << "Введите плотность жидкости (кг/м^3) = ";
				cin >> po;
				h = form3->hppgg(p, po);
				cout << "h = " << h << "м\n";
			}
			if (exit < 0 || exit3 > 3){
				cout << "Такого варианто нет\n";
			}
		}
		if (exit == 8){
			system ("CLS");
			cout << "Что именно посчитать?\n1-p=F/S\n2-F=Sp\n3-S=F/p\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "Введите силу (Н) = ";
				cin >> F;
				cout << "Введите плоадь соприкосновения (м^2) = ";
				cin >> S;
				p = form->pFS(F, S);
				cout << "р = " << p << "Па\n";
			}
			if (exit3 == 2){
				cout << "Введите площадь соприкосновения (м^2) = ";
				cin >> S;
				cout << "Введите давление (Па) = ";
				cin >> p;
				F = form2->FSp(S, p);
				cout << "F = " << F << "H\n";
			}
			if (exit3 == 3){
				cout << "Введите силу (Н) = ";
				cin >> F;
				cout << "Введите даление (Па) = ";
				cin >> p;
				S = form3->SFp(F, p);
				cout << "S = " << S << "м^2\n";
			}
			if (exit < 0 || exit3 > 3){
				cout << "Такого варианто нет\n";
			}
		}
		
		if (exit == 9){
			system ("CLS");
			cout << "Что именно посчитать?\n1-A=FS\n2-F=A/S\n3-S=A/F\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "Введите силу (Н) = ";
				cin >> F;
				cout << "Введите путь (м) = ";
				cin >> S;
				A = form->AFS(F, S);
				cout << "A = " << A << "Дж\n";
			}
			if (exit3 == 2){
				cout << "Введите работу (Дж) = ";
				cin >> A;
				cout << "Введите путь (м) = ";
				cin >> S;
				F = form2->FAS(A, S);
				cout << "F = " << F << "H\n";
			}
			if (exit3 == 3){
				cout << "Введите работу (Дж) = ";
				cin >> A;
				cout << "Введите силу (Н) = ";
				cin >> F;
				S = form3->SAF(A, F);
				cout << "S = " << S << "м\n";
			}
			if (exit < 0 || exit3 > 3){
				cout << "Такого варианто нет\n";
			}
		}
		
		if (exit == 10){
			system ("CLS");
			cout << "Что именно посчитать?\n1-N=A/t\n2-A=Nt \n3-t=A/N\n";
			cout << "!Работа может быть отрицательной если сила направленна против движения и ровна нулю если направлена перпендикулярно движению!\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "Введите работу (Дж) = ";
				cin >> A;
				cout << "Введите время (c) = ";
				cin >> t;
				N = form->NAt(A, t);
				cout << "N = " << N << "Вт";
			}
			if (exit3 == 2){
				cout << "Введите мощность (Вт) = ";
				cin >> N;
				cout << "Введите время (c) = ";
				cin >> t;
				A = form2->ANt(N, t);
				cout << "A = " << A << "Дж\n";
			}
			if (exit3 == 3){
				cout << "Введите работу (Дж) = ";
				cin >> A;
				cout << "Введите мощность (Вт) = ";
				cin >> N;
				t = form3->tAN(A, N);
				cout << "t = " << t << "c\n";
			}
			if (exit < 0 || exit3 > 3){
				cout << "Такого варианто нет\n";
			}
		}
		
		if (exit == 11){
			system ("CLS");
			cout << "Что именно посчитать?\n1-N=FV\n2-F=N/V \n3-V=N/F\n";
			cout << "!Мощиность может быть отрицательной если сила направленна против движения и ровна нулю если направлена перпендикулярно движению!\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "Введите силу (Н) = ";
				cin >> F;
				cout << "Введите скорость (м/с) = ";
				cin >> V;
				N = form->NFV(F, V);
				cout << "N = " << N << "Вт\n";
			}
			if (exit3 == 2){
				cout << "Введите мощность (Вт) = ";
				cin >> N;
				cout << "Введите скорость (м/с) = ";
				cin >> V;
				F = form2->FNV(N, V);
				cout << "F = " << F << "H\n";
			}
			if (exit3 == 3){
				cout << "Введите мощность (Вт) = ";
				cin >> N;
				cout << "Введите силу (Н) = ";
				cin >> F;
				V = form3->VNF(N, F);
				cout << "V = " << V << "м/с\n";
			}
			if (exit < 0 || exit3 > 3){
				cout << "Такого варианто нет\n";
			}
		}
		
		if (exit == 12){
			system ("CLS");
			cout << "Что именно посчитать?\n1-M=Fl\n2-F=M/l\n3-l=M/F\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "Введите силу (Н) = ";
				cin >> F;
				cout << "Введите плечо (м) = ";
				cin >> l;
				M = form->MFl(F, l);
				cout << "M = " << M << "H/м";
			}
			if (exit3 == 2){
				cout << "Введите момент силы (Н/м) = ";
				cin >> M;
				cout << "Введите плечо (м) = ";
				cin >> l;
				F = form2->FMl(M, l);
				cout << "F = " << F << "H\n";
			}
			if (exit3 == 3){
				cout << "Введите момент силы (Н/м) = ";
				cin >> M;
				cout << "Введите силу (Н) = ";
				cin >> F;
				l = form3->lMF(F, M);
				cout << "l = " << l << "м\n";
			}
			if (exit < 0 || exit3 > 3){
				cout << "Такого варианто нет\n";
			}
		}
		
		if (exit == 13){
			system ("CLS");
			ifstream fin("help.txt");
			while (!fin.eof()){
				fin.getline(help, 50);
				cout << help << endl;
			}
		}
		
		
		if (exit > 13 or exit < 0){
			cout << "\nТакого варианта нет.\n";
		}
		if (exit != 0){
			Sleep(3500);
			cout << "\nНажмите Enter дважды...\n";
			Sleep(100);
			while(exit2 != 0){
				if(getch() == 13 and getch() == 13){
					exit2 = 0;
				}
			}
			exit2 = 1;
		}
		system ("CLS");
	}
	
	system ("pause");
	return 0;
}
