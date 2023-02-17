#include <iostream>
using namespace std;

int main(){
    string satuan[] = {"km", "hm", "dam", "m", "dm", "cm", "mm"}; // wadah satuan
    string awal;
    string akhir;
    double angka, hasil;
    int x, y;
    int a = sizeof(satuan)/sizeof(*satuan);

    cout << "angka \t: "; cin >> angka;
    cout << "awal \t: "; cin >> awal;
    cout << "akhir \t: "; cin >> akhir;

    for(int i = 0; i < a; i++){ // deteksi urutan
        if(awal == satuan[i]){
            // cout << "urutan ke-" << i+1 << endl;
            x = i+1;
        }
        if(akhir == satuan[i]){
            y = i+1;
        }
    }
    
    hasil = angka;
    for(int j = 0; j < 1; j++){ // deteksi kondisi
        if(x < y){
            // cout << "turun (perkalian)" << endl;
            int z = y - x; //sebagai pangkat atau "berapa kali harus dihitung"
            for(int k = 0; k < z; k++){
                hasil *= 10;
            }
        } else if(x > y){
            // cout << "naik (pembagian)" << endl;
            int z = x - y; //sebagai pangkat atau "berapa kali harus dihitung"
            for(int l = 0; l < z; l++){
                hasil /= 10;
            }
        } else {
            // cout << "hasil = awal" << endl;
            cout << "hasil = " << awal << endl;
        }
    }
    cout << angka << " " << awal << " = " << hasil << " " << akhir << endl;
}


