
class Formulas{
public:
	float m, a, b, V, po, t, S, pg, k, dl, p, h, A, N, M, l;
	double g;
	float Fa, Fy, Ft;
	
	Formulas(){
		g = 9.8;
	}
		
	float gravity(float m){
		Ft = m*g;
		return Ft;
	}
		
	float mVp(float V, float po){
		m = V*po;
		return m;
	}
	
	float SVt(float V, float t){
		S = V * t;
		return S;
	} 
		
	float FapggV(float pg, float V){
		Fa = pg * g * V;
		return Fa;
	}	
		
	float Fykdl(float k,float dl){
		Fy=k*dl;
		return Fy;
	}
		
	float Sab(float a, float b){
		S=a*b;
		return S;
	}
		
	float ppggh(float pg, float h){
		p=pg*g*h;
		return p;
	}
	
	float pFS(float F, float S){
		p = F/S;
		return p;
	}
		
	float AFS(float F, float S){
		A = F*S;
		return A;
	}
	
	float NAt(float A, float t){
		N = A/t;
		return N;
	}
	
	float NFV(float F, float V){
		N=F*V;
		return N;
	}
	
	float MFl(float F, float l){
		M=F*l;
		return M;
	}
	
};
