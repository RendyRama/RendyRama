#include <iostream>

using namespace std;

int main()
{
    int x;
    int i=0;

    while (x!=9999){
    cout << "Input bil : ";
    cin >> x;
        if (x==9999){
        break;
    }
    cout << x << endl;
    i=i + 1;
    }

    cout << "jumlah cacah angka: " << i;
    return 0;
}
