#include <iostream>

using namespace std;

int main()
{
int x, max, min;

while (true){
cout << "Masukkan Nilai Anda: ";
cin >> x;

if (x == -99){
    break;
}
 if (max<x){
    max = x;
}
 if(min>x){
    min = x;
}
}

    cout << "Maks: " << max << endl;
    cout << "Min: " << min << endl;

    return 0;
}
