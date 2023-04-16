#include <iostream>
using namespace std;

int main()
{
    int umur, skor1, skor2;
    float nilai1, nilai2, hasil;
    char kelamin;
    string kebugaran;

    cout << "Masukan umur Anda : ";
    cin >> umur;
    cout << "Masukan jenis kelamin Anda (L/P): ";
    cin >> kelamin;
    cout << "Hasil tes 1 : ";
    cin >> nilai1;
    cout << "Hasil tes 2 : ";
    cin >> nilai2;

    if (umur >= 20 && umur <=30){
        if (kelamin == 'L' || kelamin == 'l'){
            if (nilai1 >= 38 && nilai1 <=40){
                skor1 = 3;
            } else if (nilai1 > 35 && nilai1 <= 37){
                skor1 = 2;
            } else if (nilai1 <= 35){
                skor1 = 1;
            } 

            if (nilai2 >= 14 && nilai2 <= 16){
                skor2 = 3;
            } else if (nilai2 > 11 && nilai2 <= 13){
                skor2 = 2;
            } else if (nilai2 <= 11){
                skor2 = 1;
            }
        } else if (kelamin == 'P' || kelamin == 'p'){
            if (nilai1 >= 34 && nilai1 <=36){
                skor1 = 3;
            } else if (nilai1 >= 32 && nilai1 < 34){
                skor1 = 2;
            } else if (nilai1 <= 31){
                skor1 = 1;
            } 

            if (nilai2 > 10 && nilai2 <= 13){
                skor2 = 3;
            } else if (nilai2 >= 8 && nilai2 <= 10){
                skor2 = 2;
            } else if (nilai2 < 8){
                skor2 = 1;
            }
        }
    } else if (umur >= 31 && umur <= 40){
        if (kelamin == 'L' || kelamin == 'l'){
            if (nilai1 > 35 && nilai1 <= 37){
                skor1 = 3;
            } else if (nilai1 > 32 && nilai1 <= 35){
                skor1 = 2;
            } else if (nilai1 >= 30 && nilai1 <= 32){
                skor1 = 1;
            } 

            if (nilai2 >= 28 && nilai2 <= 30){
                skor2 = 3;
            } else if (nilai2 > 25 && nilai2 <= 27){
                skor2 = 2;
            } else if (nilai2 <= 25){
                skor2 = 1;
            }
        } else if (kelamin == 'P' || kelamin == 'p'){
            if (nilai1 > 30 && nilai1 <= 32){
                skor1 = 3;
            } else if (nilai1 >= 28 && nilai1 <= 30){
                skor1 = 2;
            } else if (nilai1 < 28){
                skor1 = 1;
            } 

            if (nilai2 > 22 && nilai2 <= 24){
                skor2 = 3;
            } else if (nilai2 >= 20 && nilai2 <= 22){
                skor2 = 2;
            } else if (nilai2 < 20){
                skor2 = 1;
            }
        }
    }
    
    hasil = (skor1 + skor2)/2;
    if (hasil >= 2.5){
        kebugaran = "sangat bugar";
    } else if (hasil >= 2 && hasil < 2.5){
        kebugaran = "cukup bugar";
    } else if (hasil >= 1 && hasil < 2){
        kebugaran = "kurang bugar";
    }

    cout << endl;
    cout << "Umur Anda adalah : " << umur << " tahun" << endl;
    if (kelamin == 'L' || kelamin == 'l'){
        cout << "Jenis kelamin Anda adalah laki-laki" << endl; 
    } else if (kelamin == 'P' || kelamin == 'p'){
        cout << "Jenis kelamin Anda adalah : perempuan" << endl; 
    }
    cout << "Tingkat kebugaran Anda adalah : " << hasil << ", " << kebugaran << endl;

}
