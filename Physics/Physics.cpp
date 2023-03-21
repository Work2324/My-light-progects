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
			cout << "\n������. � ���������� ������ ���� � �������.\n";
			i++;
		}
		cout << "������ ���� �� ����������� ���������\n\n0-�����\n1-F�=mg\n2-m=Vp\n3-S=Vt\n4-Fa=p�gV�\n5-Fy=k*dl\n6-S=ab\n7-p=p�gh\n8-p=F/S\n9-A=FS\n10-N=A/t\n11-N=FV\n12-M=Fl\n13-������ � ��������� � �������������\n";
		cin >> exit;
		
		if (exit == 1){
			system ("CLS");
			cout << "\n��� ������ ���������?\n1-F�=mg\n2-m=F�/g\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "������� ����� ���� (��) = ";
			cin >> m;
			Ft = form->gravity(m);
			cout << "�����: Ft = " << Ft << "�" << endl;
			}
			if (exit3 == 2){
				cout << "������� ���� ������� (�) = ";
				cin >> Ft;
				m = form2->mFtg(Ft);
				cout << "�����: m = " << m << "��";
			}
			if (exit3 < 1 || exit3 > 2 ){
				cout << "\n������ �������� ���.\n";
			}
		}
		
		if (exit == 2){
			system ("ClS");
			cout << "\n��� ������ ���������?\n1-m=Vp\n2-V=m/p\n3-p=m/V\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "������� ����� ���� (� ���) = ";
			cin >> V;
			cout << "������� ��������� �������� (��/� ���) = ";
			cin >> po;
			m = form->mVp(V, po);
			cout << "�����: m = " << m << "��\n";
			}
			if (exit3 == 2){
				cout << "������� ����� ���� (��) = ";
				cin >> m;
				cout << "������� ��������� ���� (��/�^3) = ";
				cin >> po;
				V = form2->Vmpo(m, po);
				cout << "V = " << V << "�^3\n";
			}
			if (exit3 == 3){
				cout << "������� ����� ���� (��) = ";
				cin >> m;
				cout << "������� ����� ���� (�^3) = ";
				cin >> V;
				po = form3->pomV(m, V);
				cout << "po = " << po << "��/�^3\n";
			}
			if (exit3 < 1 || exit3 > 3){
				cout << "������ �������� ���\n";
			}
		}
		
		if (exit == 3){
			system ("CLS");
			cout << "��� ������ �����?\n1-S=Vt\n2-V=S/t\n3-t=S/V\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "������� �������� (��/�) = ";
			cin >> V;
			cout << "������� ����� (�) = ";
			cin >>  t;
			S = form->SVt(V, t);
			cout << "�����: S = " << S << "��\n";
			}
			if (exit3 == 2){
				cout << "������� ���� (�) = ";
				cin >> S;
				cout << "������� ����� (�) = ";
				cin >> t;
				V = form2->VSt(S, t);
				cout << "V = " << V << "�/�\n";
			}
			if (exit3 == 3){
				cout << "������� ���� (�) = ";
				cin >> S;
				cout << "������� �������� (�/�) = ";
				cin >> V;
				t = form3->tSV(S, V);
				cout << "t = " << t << "�\n";
			}
			if (exit3 < 1 || exit3 > 3){
				cout << "������ ������� ���.\n";
			}
		}
		
		if (exit == 4){
			system ("CLS");
			cout << "��� ������ ���������?\n1-Fa=p�gV�\n2-p�=Fa/(V�g)\n3-V�=Fa/(p�g)\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "������� �������� �������� (��/� ���) = ";
				cin >> pg;
				cout << "������� ����� ����������� ����� ���� (� ���) = ";
				cin >> V;
				Fa = form->FapggV(pg, V);
				cout << "�����: Fa = " << Fa << "H\n" << endl;	
			}
			if (exit3 == 2){
				cout << "������� ���������� ���� (H) = ";
				cin >> Fa;
				cout << "������� ����� ���������� ����� ���� (�^3) = ";
				cin >> V;
				po = form3->pgFaVg(Fa, V);
				cout << "p� = " << po << "��/�^3\n";
			}
			if (exit3 == 3){
				cout << "������� ���������� ���� (�) = ";
				cin >> Fa;
				cout << "������� ��������� �������� (��/�^3) = ";
				cin >> po;
				V = form2->VFapgg(Fa, po);
				cout << "V = " << V << "�^3\n";
				
			}
			
		}
		
		if (exit == 5){
			system ("CLS");
			cout << "��� ������ ���������?\n1-Fy=k*dl\n2-k=Fy/dl\n3-dl=Fy/k\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "������� ��������� (�/�) = ";
				cin >> k;
				cout << "������� ��������� (�) = ";
				cin >> dl;
				Fy = form->Fykdl(k, dl);
				cout << "�����: Fy = " << Fy << "H\n";
			}
			if (exit3 == 2){
				cout << "������� ���� ��������� (H) = ";
				cin >> Fy;
				cout << "������� ��������� (�) = ";
				cin >> dl;
				k = form2->kFydl(Fy, dl);
				cout << "k = " << k << "�/�\n";
			}
			if (exit3 == 3){
				cout << "������� ���� ��������� (H) = ";
				cin >> Fy;
				cout << "������� ��������� (�/�) = ";
				cin >> k;
				dl = form3->dlFyk(Fy, k);
				cout << "dl = " << dl << "�\n";
			}
			if (exit < 0 || exit3 > 3){
				cout << "������ �������� ���\n";
			}
		}
		
		if (exit == 6){
			system ("CLS");
			cout << "��� ������ ���������?\n1-S=ab\n2-a=S/b\n3-b=S/a\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "������� ������� a � b (�) = ";
				cin >> a, b;
				S = form->Sab(a, b);
				cout << "S = " << S << "�^2\n";
			}
			if (exit3 == 2){
				cout << "������� ������� (�^2) = ";
				cin >> S;
				cout << "������� ���� �� ������ (�) = ";
				cin >> b;
				a = form2->aSb(S, b);
				cout << "������ ������� = " << a << "�\n";
			}
			if (exit < 0 || exit3 > 2){
				cout << "������ �������� ���\n";
			}
		}
		
		if (exit == 7){
			system ("CLS");
			cout << "��� ������ ���������?\n1-p=p�gh\n2-p�=p/(gh)\n3-h=p/(p�g)\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "������� ��������� �������� (��/�^3) = ";
				cin >> po;
				cout << "������� ������� (�) = ";
				cin >> h;
				p = form->ppggh(po, h);
				cout << "p = " << p << "��\n";
			}
			if (exit3 == 2){
				cout << "������� �������� (��) = ";
				cin >> p;
				cout << "������� ������� (�) = ";
				cin >> h;
				po = form2->pgpgh(p, h);
				cout << "p = " << p << "��/�^3\n";
			}
			if (exit3 == 3){
				cout << "������� �������� (��) = ";
				cin >> p;
				cout << "������� ��������� �������� (��/�^3) = ";
				cin >> po;
				h = form3->hppgg(p, po);
				cout << "h = " << h << "�\n";
			}
			if (exit < 0 || exit3 > 3){
				cout << "������ �������� ���\n";
			}
		}
		if (exit == 8){
			system ("CLS");
			cout << "��� ������ ���������?\n1-p=F/S\n2-F=Sp\n3-S=F/p\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "������� ���� (�) = ";
				cin >> F;
				cout << "������� ������ ��������������� (�^2) = ";
				cin >> S;
				p = form->pFS(F, S);
				cout << "� = " << p << "��\n";
			}
			if (exit3 == 2){
				cout << "������� ������� ��������������� (�^2) = ";
				cin >> S;
				cout << "������� �������� (��) = ";
				cin >> p;
				F = form2->FSp(S, p);
				cout << "F = " << F << "H\n";
			}
			if (exit3 == 3){
				cout << "������� ���� (�) = ";
				cin >> F;
				cout << "������� ������� (��) = ";
				cin >> p;
				S = form3->SFp(F, p);
				cout << "S = " << S << "�^2\n";
			}
			if (exit < 0 || exit3 > 3){
				cout << "������ �������� ���\n";
			}
		}
		
		if (exit == 9){
			system ("CLS");
			cout << "��� ������ ���������?\n1-A=FS\n2-F=A/S\n3-S=A/F\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "������� ���� (�) = ";
				cin >> F;
				cout << "������� ���� (�) = ";
				cin >> S;
				A = form->AFS(F, S);
				cout << "A = " << A << "��\n";
			}
			if (exit3 == 2){
				cout << "������� ������ (��) = ";
				cin >> A;
				cout << "������� ���� (�) = ";
				cin >> S;
				F = form2->FAS(A, S);
				cout << "F = " << F << "H\n";
			}
			if (exit3 == 3){
				cout << "������� ������ (��) = ";
				cin >> A;
				cout << "������� ���� (�) = ";
				cin >> F;
				S = form3->SAF(A, F);
				cout << "S = " << S << "�\n";
			}
			if (exit < 0 || exit3 > 3){
				cout << "������ �������� ���\n";
			}
		}
		
		if (exit == 10){
			system ("CLS");
			cout << "��� ������ ���������?\n1-N=A/t\n2-A=Nt \n3-t=A/N\n";
			cout << "!������ ����� ���� ������������� ���� ���� ����������� ������ �������� � ����� ���� ���� ���������� ��������������� ��������!\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "������� ������ (��) = ";
				cin >> A;
				cout << "������� ����� (c) = ";
				cin >> t;
				N = form->NAt(A, t);
				cout << "N = " << N << "��";
			}
			if (exit3 == 2){
				cout << "������� �������� (��) = ";
				cin >> N;
				cout << "������� ����� (c) = ";
				cin >> t;
				A = form2->ANt(N, t);
				cout << "A = " << A << "��\n";
			}
			if (exit3 == 3){
				cout << "������� ������ (��) = ";
				cin >> A;
				cout << "������� �������� (��) = ";
				cin >> N;
				t = form3->tAN(A, N);
				cout << "t = " << t << "c\n";
			}
			if (exit < 0 || exit3 > 3){
				cout << "������ �������� ���\n";
			}
		}
		
		if (exit == 11){
			system ("CLS");
			cout << "��� ������ ���������?\n1-N=FV\n2-F=N/V \n3-V=N/F\n";
			cout << "!��������� ����� ���� ������������� ���� ���� ����������� ������ �������� � ����� ���� ���� ���������� ��������������� ��������!\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "������� ���� (�) = ";
				cin >> F;
				cout << "������� �������� (�/�) = ";
				cin >> V;
				N = form->NFV(F, V);
				cout << "N = " << N << "��\n";
			}
			if (exit3 == 2){
				cout << "������� �������� (��) = ";
				cin >> N;
				cout << "������� �������� (�/�) = ";
				cin >> V;
				F = form2->FNV(N, V);
				cout << "F = " << F << "H\n";
			}
			if (exit3 == 3){
				cout << "������� �������� (��) = ";
				cin >> N;
				cout << "������� ���� (�) = ";
				cin >> F;
				V = form3->VNF(N, F);
				cout << "V = " << V << "�/�\n";
			}
			if (exit < 0 || exit3 > 3){
				cout << "������ �������� ���\n";
			}
		}
		
		if (exit == 12){
			system ("CLS");
			cout << "��� ������ ���������?\n1-M=Fl\n2-F=M/l\n3-l=M/F\n";
			cin >> exit3;
			if (exit3 == 1){
				cout << "������� ���� (�) = ";
				cin >> F;
				cout << "������� ����� (�) = ";
				cin >> l;
				M = form->MFl(F, l);
				cout << "M = " << M << "H/�";
			}
			if (exit3 == 2){
				cout << "������� ������ ���� (�/�) = ";
				cin >> M;
				cout << "������� ����� (�) = ";
				cin >> l;
				F = form2->FMl(M, l);
				cout << "F = " << F << "H\n";
			}
			if (exit3 == 3){
				cout << "������� ������ ���� (�/�) = ";
				cin >> M;
				cout << "������� ���� (�) = ";
				cin >> F;
				l = form3->lMF(F, M);
				cout << "l = " << l << "�\n";
			}
			if (exit < 0 || exit3 > 3){
				cout << "������ �������� ���\n";
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
			cout << "\n������ �������� ���.\n";
		}
		if (exit != 0){
			Sleep(3500);
			cout << "\n������� Enter ������...\n";
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
