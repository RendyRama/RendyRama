#include <iostream>

using namespace std;

int main()
{
int x;
while (true){
cout << "Masukkan Nilai Anda : ";
cin >> x;

if (x==-99){
    cout << endl;
    cout << "Keluar karena break" << endl;
    break;
}
}
    return 0;
}
