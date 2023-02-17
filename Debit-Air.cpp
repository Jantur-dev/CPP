#include<iostream>
using namespace std;

// Rumus Debit Air 
//debit = volume/waktu = D = V/t
//Volume = Debit x Waktu = V = D x t
//Waktu = Volume/Debit = t = V/D

//Mencari Debit air : D = V/t
double Debit(double V, double t){
	double D = V/t;
	return D;
}

void tampilD(double V, double t){
	double D = Debit(V, t);
	cout<<"Diket = "<<endl;
	cout<<"  V \t= "<<V<<" liter"<<endl;
	cout<<"  t \t= "<<t<<" detik"<<endl;
	cout<<"Ditanya = Debit?"<<endl;
	cout<<"Jawab : "<<endl;
	cout<<"D \t= V / t"<<endl;
	cout<<"D \t= "<<V<<" / "<<t<<endl;
	cout<<"D \t= "<<D<<" liter/detik"<<endl;
}

//Mencari Volume air : V = D x t
double Volume(double D, double t){
	double V = D * t;
	return V;
}

void tampilV(double d, double t){
	double V = Volume(d, t);
	cout<<"Diket = "<<endl;
	cout<<"  D \t= "<<d<<" liter/detik"<<endl;
	cout<<"  t \t= "<<t<<" detik"<<endl;
	cout<<"Ditanya : Volume?"<<endl;
	cout<<"Jawab : "<<endl;
	cout<<"V \t= D x t"<<endl;
	cout<<"V \t= "<<d<<" x "<<t<<endl;
	cout<<"V \t= "<<V<<" liter"<<endl;
}

//Mencari Waktu : t = V/D
double Waktu(double V, double D){
	double t = V / D;
	return t;
}
void tampilT(double V, double D){
	double t = Waktu(V, D);
	cout<<"Diket = "<<endl;
	cout<<"  V \t= "<<V<<" liter"<<endl;
	cout<<"  D \t= "<<D<<" liter/detik"<<endl;
	cout<<"Ditanya : Waktu?"<<endl;
	cout<<"Jawab : "<<endl;
	cout<<"t \t= V / D"<<endl;
	cout<<"t \t= "<<V<<" / "<<D<<endl;
	cout<<"t \t= "<<t<<" detik"<<endl;
}

int main(){
	double D, V, t;
	string isi[4] = {"Debit", "Volume", "Waktu", "Akhiri"};
	int pilih;
	string ulang = "y";
	
	do{
		system("cls");
		for(int a = 0; a < 4; a++){
		cout<<a+1<<". "<<isi[a]<<endl;
		}
		cout<<"Pilihan : "; cin>>pilih;
		system("cls");
		if(pilih == 1){
			cout<<"## Mencari Debit Air ##"<<endl;
			cout<<"Volume(liter) \t= "; cin>>V;
			cout<<"Waktu(detik) \t= "; cin>>t;
			tampilD(V, t);
		} else if(pilih == 2){
			cout<<"## Mencari Volume ##"<<endl;
			cout<<"Debit(liter/detik) \t= "; cin>>D;
			cout<<"Waktu(detik) \t= ";cin>>t;
			tampilV(D, t);
		} else if(pilih == 3){
			cout<<"## Menghitung Waktu ##"<<endl;
			cout<<"Volume(liter) \t= "; cin>>V;
			cout<<"Debit(liter/detik) \t= "; cin>>D;
			tampilT(V, D);
		} else if(pilih == 4){
			break;
		} else{
			cout<<"Input Tidak Tersedia"<<endl;
		}
		cout<<"Ulangi? <y/n> : "; cin>>ulang;
	} while(ulang == "y");
	system("cls");
	cout<<"Program Selesai"<<endl;
	
}
