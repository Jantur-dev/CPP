#include<iostream>
using namespace std;

int main(){
	int angka;
	bool bil_prima = true;
	cout<<"Masukkan angka : ";cin>>angka;
	
	// 0 & 1 bukan bil prima
	if(angka == 0 || angka == 1){
		bil_prima = false;
	} else{
		for(int i=2; i<=angka/2; i++){
			if(angka % i == 0){
				bil_prima = false;
				break;
			}		
		}
	}
	if(bil_prima){
		cout<<angka<<" adalah bil prima"<<endl;
	} else{
		cout<<angka<<" bukan bilangan prima"<<endl;
	}
}
