#include <iostream>
#include "Car.h"
#include <windows.h>
#include <fstream>
#include <string>

int main() 
{
    double ras = 0;
    int deb = 1;
    setlocale(LC_ALL, "Russian");
    while (deb == 1) {
        std::cout << "������� ������ ������� (��/�): ";
        std::cin >> ras;
        if (ras > 18 || ras < 6) {
            std::cout << "\n��� �� ������!\���������� ��� �������, �? \n";
        }



        if (ras <= 18 && ras > 12) {
            std::cout << "\n�� �� ��������, ���!\n\n";
            deb = 2;
        }

        if (ras <= 12 && ras > 8) {
            std::cout << "\n�������� ����� ������!\n\n";
            deb = 2;
        }

        if (ras <= 8 && ras >= 6) {
            std::cout << "\n�� �������, ������!\n\n";
            deb = 2;
        }
    }

    Car* car = new Car(ras);
    int smoke = 0;
    int i = 1;
    while (deb != 0) {
        std::cout << "��� ������?\n1. �����������\n2. �������� ����������\n3. ������, ��� ������ ������ �� ������\n4. ������, ������� �������� �������\n5. ��������\n6. ���� �����\n0. ��������� �������\n������� �������� ����� ����:";
        std::cin >> deb;

        if (deb == 0) {
            std::cout << "\n������� �����������! \n�� ����� ������!\n\n";
        }

        if (deb == 1) {
            double lit;
            int a;
            std::cout << "������� ���������� ������ ������� (�� ������, ��� ��� - 40 ������!):";
            std::cin >> lit;
            a = car->refill(lit);
            if (a == 1) {
                std::cout << "\n������ ������� ����������!\n\n";
            }
            if (a == 2) {
                std::cout << "\n�� ����������� ���, ������ ������!\n������ ��� ������, ���-�� ����� ����, ������ ������ � ��!\n��� ������� �� �����!\n\n";
                smoke = 1;
            }
            if (a == 3) {
                std::cout << "\n�� �����? ��������, �� ����� ����� ����� � ������.\n\n";
                deb = 0;
            }
        }

        if (deb == 2) {
            double km;
            bool a;
            std::cout << "������� ���������� � ����������:";
            std::cin >> km;
            a = car->translate(km);
            if (a == true) {
                if (car->getx() > -1000 || car->getx() < 1000) {
                    std::cout << "\n�� ������� �������� ��������� ����������!\n\n";
                    smoke = 0;
                }
            }
            else {
                std::cout << "\n� ��� ������������ �������, �������� ������� ����������!\n\n";
                smoke = 0;
            }

            if (car->getx() > 1000) {
                if (i % 2 == 0) {
                    std::cout << "\n�� ����� ����� �����. ������ �� ����. � ���� ������ �������� � �������� ���� � ����. \n";
                }
                else {
                    std::cout << "\n�� ����� ����� �����. ���������� � ����� �������� � ������� (������-�� �� ���!!!???).\n";
                }
                deb = 0;
            }

            if (car->getx() < -1000) {
                if (i % 2 == 0) {
                    std::cout << "\n�� ����� ����� �����. ������������ �����������, � �����-��... � �����, ������������.\n";
                }
                else {
                    std::cout << "\n� ����� ����� �����. � ��� � ������ ��������� ��������. \n���������, ��� �� ������ - ��� ���� ���� �� ����� ������� �����.\n";
                }
                deb = 0;
            }

        }

        if (deb == 3) {
            std::cout << "\n�� ������ �� ��������� ����� ��: " << car->getx() << " ����������\n" << std::endl;
            if (car->getx() >= 0 && car->getx() < 200) {
                std::cout << "�� ���������� � ���������� �����. \n������ ������ ����. ����� �������� ���������� - ������ �����. \n���������!\n" << std::endl;
            }

            if (car->getx() >= 200 && car->getx() < 400) {
                std::cout << "�� ���������� �� ������ ����. ����� ������� �����, � ������� ������ ����� � ������ �����. \n������ ����� ������ � ������ ����, ������������ �� ��������� ���� �����. \n������ ���� ����� �� ����.\n" << std::endl;
            }

            if (car->getx() >= 400 && car->getx() < 600) {
                std::cout << "�� � �����. ���-�� ������ ��� ����� ������� ����� �����. ������ ��� �� ������� ����������, �� ���������. \n�� �������� � ������ � ������ ��� ���� � ���������. ����������� ������� � ����������� �������. \n�� �� ������� ����!\n" << std::endl;
            }

            if (car->getx() >= 600 && car->getx() < 640) {
                std::cout << "�� � �������. �� �������� �������� ������� ��������. \n������ ����� �������������� ������. ���-�� �� ���� ���� �������. \n�����, ����������?\n" << std::endl;
            }

            if (car->getx() >= 640 && car->getx() < 800) {
                std::cout << "� � �����. ���-�� ������ ��� ����� ������� ����� �����. ������ ��� �� ������� ����������, �� ���������. \n�� �������� � ������ � ������ ��� ���� � ���������. ����������� ������� � ����������� �������. \n�� �� ������� ����!\n" << std::endl;
            }

            if (car->getx() >= 800 && car->getx() < 1000) {
                std::cout << "�� � �����. ���� �� ����� - ���������� ����. \n����� ������� ������� ������� ��������, � ���������� �� ���, ����� ����� �� ����. \n�������� �� ����� ��������!\n" << std::endl;
            }

            if (car->getx() < 0 && car->getx() > -200) {
                std::cout << "�� ���������� � ���������� �����. \n������ ������ ����. ����� �������� ���������� - ������ �����. \n���������!\n" << std::endl;
            }

            if (car->getx() <= -200 && car->getx() > -400) {
                std::cout << "�� ���������� �� ������ ����. ����� ������� �����, � ������� ������ ����� � ������ �����. \n������ ����� ������ � ������ ����, ������������ �� ��������� ���� �����. \n������ ���� ����� �� ����.\n" << std::endl;
            }

            if (car->getx() <= -400 && car->getx() > -600) {
                std::cout << "�� � �����. ���-�� ������ ��� ����� ������� ����� �����. ������ ��� �� ������� ����������, �� ���������. \n�� �������� � ������ � ������ ��� ���� � ���������. ����������� ������� � ����������� �������. \n�� �� ������� ����!\n" << std::endl;
            }

            if (car->getx() <= -600 && car->getx() > -640) {
                std::cout << "�� � ������. \n������ ���������, �������� (������?), �������. ���������� �������� ����. \n�����, ��� � �������� ����?\n" << std::endl;
            }

            if (car->getx() <= -640 && car->getx() > -800) {
                std::cout << "�� � �����. ���-�� ������ ��� ����� ������� ����� �����. ������ ��� �� ������� ����������, �� ���������. \n�� �������� � ������ � ������ ��� ���� � ���������. ����������� ������� � ����������� �������. \n�� �� ������� ����!\n" << std::endl;
            }

            if (car->getx() <= -800 && car->getx() > -1000) {
                std::cout << "�� � �����. ���� �� ����� - ���������� ����. \n����� ������� ������� ������� ��������, � ���������� �� ���, ����� ����� �� ����. \n�������� �� ����� ��������!\n" << std::endl;
            }
        }

        if (deb == 4) {
            std::cout << "\n������� ������� � ����� ����: " << car->getbenz() << " ������\n" << std::endl;
        }

        if (deb == 5) {
            if (smoke == 0) {
                if (i % 2 == 0) {
                    std::cout << "\n������� ����� ���������� ���� � ����, � ��� �������� �������� ��������� � ����!\n\n";
                }
                else {
                    std::cout << "\n���� ����� ����������. � �� ������, �� �� ������, �� �� ��������... �������, ����\n\n";
                }
            }

            else {
                std::cout << "\n��� �� �������������!!!!!!! �� ���������� � (������� ������ ����)!\n\n";
                deb = 0;
            }
        }

        if (deb == 6) {
            if (i % 2 == 0) {
                std::cout << "\n������ ��� �������, ��� ������� � ������! � �����������!\n\n";
            }
            else {
                std::cout << "\n��� ��� ������? �������, �� ����������...\n\n";
            }
        }
        
        if (deb < 0 || deb > 6) {
                std::cout << "\n�� ����������?! ��� ������ ��������! ���������� ���!:)\n\n";
        }
        
        system("pause");
        system("CLS");
        i++;
    }
    return 0;
}
