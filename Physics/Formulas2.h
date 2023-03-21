
class Formulas2{
public:
	float m, a, b, V, F, po, t, S, pg, k, dl, p, h, A, N, M, l;
	double g;
	float Fa, Fy, Ft;
	Formulas2(){
		g = 9.8;
	}
	
	float mFtg(float Ft){
		m=Ft/g;
		return m;
	}
	
	float Vmpo(float m, float po){
		V = m/po;
		return V;
	}
	
	float VSt(float S, float t){
		V=S/t;
		return V;
	}
	
	float kFydl(float Fy, float dl){
		k=Fy/dl;
		return k;
	}
	
	float VFapgg(float Fa, float po){
		V=Fa/(pg*g);
		return V;
	}
	
	float aSb(float S, float b){
		a=S/b;
		return a;
	}
	
	float pgpgh(float p, float h){
		p=p/(g*h);
		return p;
	}
	
	float FSp(float S, float p){
		F=S*p;
		return F;
	}
	
	float FAS(float A, float S){
		F=A/S;
		return F;
	}
	
	float ANt(float N, float t){
		A=N*t;
		return A;
	}
	
	float FNV(float N, float V){
		F=N*V;
		return F;
	}
	
	float FMl(float M, float l){
		F=M/l;
		return F;
	}
	
};
