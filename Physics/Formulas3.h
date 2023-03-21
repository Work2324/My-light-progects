
class Formulas3{
public:
	float m, V, po, t, S, pg, k, dl, p, h, A, N, M, l;
	double g;
	float Fa, Fy, Ft;
	Formulas3(){
		g  = 9.8;
	}
	
	float pomV(float m, float V){
		po = m/V;
		return po;
	}
	
	float tSV(float S, float V){
		t = S/V;
		return t;
	}
	
	float dlFyk(float Fy, float k){
		dl=Fy/k;
		return dl;
	}
	
	float pgFaVg(float Fa, float V){
		po=Fa/(V*g);
		return po;
	}
	
	float hppgg(float p, float po){
		h=p/(po/g);
		return h;
	}
	
	float SFp(float F, float p){
		S=F/p;
		return S;
	}
	
	float SAF(float A, float F){
		S=A/F;
		return S;
	}
	
	float tAN(float A, float N){
		t=A/N;
		return t;
	}
	
	float VNF(float N, float F){
		V=N/F;
		return V;
	}
	
	float lMF(float F, float M){
		l=M/F;
		return l;
	}
	
};
