#include<iostream>
using namespace std;


// Transformator Is/Ip = Vp/Vs = Np/Ns

// Is/Ip = Vp/Vs

double hitungIs(double Ip, double Vp, double Vs){
	double Is = Ip * Vp / Vs;
	return Is;
}

double hitungIp(double Is, double Vp, double Vs){
	double Ip = Is * Vs / Vp;
	return Ip;
}


void tampilIs(double Ip, double Vp, double Vs){
	double Is = hitungIs(Ip, Vp, Vs);
	string a = "Ampere";
	cout<<"Hitung Is (Arus listrik Sekunder)"<<endl;
	cout<<"Is \t= Ip x Vp / Vs"<<endl;
	cout<<"Is \t= "<<Ip<<" x "<<Vp<<" / "<<Vs<<endl;
	cout<<"Is \t= "<<Is<<" "<<a<<endl;
}

void tampilIp(double Is, double Vp, double Vs){
	double Ip = hitungIp(Is, Vp, Vs);
	string a = "Ampere";
	cout<<"Hitung Ip (Arus listrik Primer)"<<endl;
	cout<<"Ip \t= Is x Vs / Vp"<<endl;
	cout<<"Ip \t= "<<Is<<" x "<<Vs<<" / "<<Vp<<endl;
	cout<<"Ip \t= "<<Ip<<" "<<a<<endl;
}

// Vp/Vs = Np/Ns
double hitungNp(double Ns, double Vp, double Vs){
	double Np = Ns * Vp / Vs;
	return Np;
}

double hitungNs(double Np, double Vs, double Vp){
	double Ns = Np * Vs / Vp;
	return Ns;
}

void tampilNp(double Ns, double Vp, double Vs){
	double Np = hitungNp(Ns, Vp, Vs);
	string l = "Lilitan";
	cout<<"Hitung Np (Lilitan Primer)"<<endl;
	cout<<"Np \t= Ns x Vp / Vs"<<endl;
	cout<<"Np \t= "<<Ns<<" x "<<Vp<<" / "<<Vs<<endl;
	cout<<"Np \t = "<<Np<<" "<<l<<endl;
}

void tampilNs(double Np, double Vs, double Vp){
	double Ns = hitungNs(Np, Vs, Vp);
	string l = "Lilitan";
	cout<<"Hitung Ns (Lilitan Sekunder)"<<endl;
	cout<<"Ns \t= Np x Vs / Vp"<<endl;
	cout<<"Ns \t= "<<Ns<<" x "<<Vs<<" / "<<Vp;
	cout<<"Ns \t= "<<Ns<<" "<<l<<endl;
}

// Vp/Vs = Np/Ns
double hitungVp(double Vs, double Np, double Ns){
	double Vp = Vs * Np / Ns;
	return Vs;
}

double hitungVs(double Vp, double Ns, double Np){
	double Vs = Vp * Ns / Np;
	return Vs;
}

void tampilVp(double Vs, double Np, double Ns){
	double Vp = hitungVp(Vs, Np, Ns);
	string V = "Volt";
	cout<<"Hitung Vp (Tegangan Primer)"<<endl;
	cout<<"Vp \t= Vs x Np / Ns"<<endl;
	cout<<"Vp \t= "<<Vs<<" x "<<Np<<" / "<<Ns<<endl;
	cout<<"Vp \t= "<<Vp<<" "<<V<<endl;
}

void tampilVs(double Vp, double Ns, double Np){
	double Vs = hitungVs(Vp, Ns, Np);
	string V = "Volt";
	cout<<"Hitung Vs (Tegangan Sekunder)"<<endl;
	cout<<"Vs \t= Vp x Ns / Np"<<endl;
	cout<<"Vs \t= "<<Vp<<" x "<<Ns<<" / "<<endl;
	cout<<"Vs \t= "<<Vs<<" "<<V<<endl;
}

int main(){
	double Is, Ip, Vp, Vs, Np, Ns;
	string lanjut;
	int ditanya; 
	
	do{
		system("cls");
		cout<<"Ditanya \n1. Is\n2. Ip\n3. Vp\n4. Vs\n5. Np\n6. Ns"<<endl;
		cout<<"Apa yang ditanyakan? : "; cin>>ditanya;
		cout<<"============================="<<endl;
	
		if(ditanya == 1){
			cout<<"Masukan Ip : "; cin>>Ip;
	    	cout<<"Masukan Vp : "; cin>>Vp;
			cout<<"Masukan Vs : "; cin>>Vs;
			cout<<"========================="<<endl;
			tampilIs(Ip, Vp, Vs);
		} else if(ditanya == 2){
			cout<<"Masukan Is : "; cin>>Is;
			cout<<"Masukan Vs : "; cin>>Vs;
			cout<<"Masukan Vp : "; cin>>Vp;
			cout<<"========================="<<endl;
			tampilIp(Is, Vp, Vs);
		} else if(ditanya == 3){
			cout<<"Masukan Vs : "; cin>>Vs;
			cout<<"Masukan Np : "; cin>>Np;
			cout<<"Masukan Ns : "; cin>>Ns;
			cout<<"========================="<<endl;
			tampilVp(Vs, Np, Ns);
		} else if(ditanya == 4){
			cout<<"Masukan Vp : "; cin>>Vs;
			cout<<"Masukan Ns : "; cin>>Ns;
			cout<<"Masukan Np : "; cin>>Np;
			cout<<"========================="<<endl;
			tampilVs(Vp, Ns, Np);
		} else if(ditanya == 5){
			cout<<"Masukan Ns : "; cin>>Ns;
			cout<<"Masukan Vp : "; cin>>Vp;
			cout<<"Masukan Vs : "; cin>>Vs;
			cout<<"========================="<<endl;
			tampilNp(Ns, Vp, Vs);	
		} else if(ditanya == 6){
			cout<<"Masukan Np : "; cin>>Np;
			cout<<"Masukan Vs : "; cin>>Vs;
			cout<<"Masukan Vp : "; cin>>Vp;
			cout<<"========================="<<endl;
			tampilNs(Np, Vs, Vp);
		} else {
			cout<<"Input tidak tersedia"<<endl;
		}
		
		cout<<"========================="<<endl;
		cout<<"Lanjut? y/n : "; cin>>lanjut;
		system("cls");
	} while(lanjut == "y");
	cout<<"Program Selesai";
	
			
}








