//#pragma once
#include <math.h>

class Car {
public:
	double x;
	double ras;
	double benz;
	double bak;

	Car(double a) {
		x = 0;
		ras = a;
		benz = 0;
		bak = 40;
	}

	bool translate(double a) {
		if (abs(a) <= ras * benz) {
			x += a;
			benz = benz - abs(a) / ras;
			return true;
		}
		else {
			if (a >= 0) {
				x += ras * benz;
			}
			else {
				x -= ras * benz;
			}
			benz = 0;
			return false;
		}
	}

	int refill(double a) {
		if (a >= 0) {
			if (bak - benz >= a) {
				benz += a;
				return 1;
			}
			else {
				benz = bak;
				return 2;
			}
		}
		else {
			return 3;
		}
	}

	double getx() {
		return x;
	}

	double getbenz() {
		return benz;
	}
};
