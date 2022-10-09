#include <iostream>

using namespace std;

int main()
{
    int tanggal, bulan;
    cout << "Masukkan tanggal anda : " << endl;
    cin >> tanggal;
    cout << "Masukkan bulan anda : " << endl;
    cin >> bulan;

    if ((tanggal >=1 && tanggal <=31)&&(bulan == 1 || bulan == 3 || bulan == 5 || bulan == 7 || bulan == 8 || bulan == 10 || bulan == 12)){
        cout << "Tanggal valid" << endl;
    }
    else if ((tanggal >=1 && tanggal <= 30)&&(bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11)){
        cout << "Tanggal valid" << endl;
    }
    else if ((tanggal >=1 && tanggal <=28)&&(bulan == 2)){
        cout << "Tanggal valid" << endl;
    }
    else {
        cout << "Tanggal tidak valid" << endl;
    }
    return 0;
}
