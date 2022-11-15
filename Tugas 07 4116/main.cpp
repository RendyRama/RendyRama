#include <iostream>

using namespace std;

int main()
{
int hpermen;
int permen;
int uang=5000;


cout << "Masukkan harga permen: " << endl;
cin >> hpermen;
cout << "<=================================>" << endl;

if (hpermen==1000){
    cout << "Ardi mendapatkan permen sebanyak: 3"<< endl;
}

else if (hpermen==500){
    hpermen= uang/hpermen;
    cout << "Ardi mendapatkan permen sebanyak: " << hpermen;
}

else if (hpermen==300) {
    for (int i=1; i <= uang; i++){
    cout << hpermen << endl;
    hpermen=hpermen + 300;
    i=hpermen;
}
    permen = uang/300;
    cout << "Ardi mendapatkan permen sebanyak: " << permen << endl;
}

else {
    cout << "Error!" << endl;
}

return 0;
}
