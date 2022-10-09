#include <iostream>

using namespace std;

int main()
{
int hari;
int bulan;

cout << "\nMasukkan hari:\n";
cout << " > ";
cin >> hari;
cout << "Masukkan bulan:\n";
cout << " > ";
cin >> bulan;

bool bulanGanjil = bulan % 2 == 1;
int hariMaksimal;

if (bulan == 2)
{
hariMaksimal = 29;
}
else if (bulan <= 7){
if (bulanGanjil){
hariMaksimal = 31;
}
else{
hariMaksimal = 30;
}
 }
else{
if (bulanGanjil)
{
hariMaksimal = 30;
}
else
{
hariMaksimal = 31;
}
}

if (hari < 1 || hari > hariMaksimal || bulan < 1 || bulan > 12){
    cout << "TANGGAL TIDAK VALID\n";
}
else{
    cout << "TANGGAL VALID\n";
        }

return 0;
}
