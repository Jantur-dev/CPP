#include <iostream>
using namespace std;

int main(){
    float tb, bb_anda, bb_ideal;
    string gender;

    cout << "\nGender (L/P) \t\t: "; cin >> gender;

    if(gender == "L"){
        cout << "Berat Badan (kg) \t: "; cin >> bb_anda;
        cout << "Tinggi Badan (cm) \t: "; cin >> tb;
        bb_ideal = (tb - 100) - ((tb - 100) * 0.1);
    } else if(gender == "P"){
        cout << "Berat Badan (kg) \t: "; cin >> bb_anda;
        cout << "Tinggi Badan (cm) \t: "; cin >> tb;
        bb_ideal = (tb - 100) - ((tb - 100) * 0.15);
    } else {
        cout << "Gender salah" << endl;
    }


    if(bb_ideal != 0){
        if(bb_ideal == bb_anda){
            cout << "\nBerat Badan Anda \t: " << bb_anda << " kg" << endl;
            cout << "Berat Badan Ideal \t: " << bb_ideal << " kg" << endl;
            cout << "Berat Badan Anda \t: Ideal\n" << endl; 
        } else if(bb_anda > bb_ideal){
            cout << "\nBerat Badan Anda \t: " << bb_anda << " kg" << endl;
            cout << "Berat Badan Ideal \t: " << bb_ideal << " kg" << endl;
            cout << "Berat Badan Anda \t: Gemuk\n" << endl; 
        } else {
            cout << "\nBerat Badan Anda \t: " << bb_anda << " kg" << endl;
            cout << "Berat Badan Ideal \t: " << bb_ideal << " kg" << endl;
            cout << "Berat Badan Anda \t: Kurus\n" << endl; 
        }
    }
}