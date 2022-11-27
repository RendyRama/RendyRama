#include <iostream>

using namespace std;

int main()
{
    int x;
    int sum=0;

    while (x!=9999){
    cout << "Input bil : ";
    cin >> x;
        if (x==9999){
        break;
    }
    cout << x << endl;
    sum=sum + x;
    }

    cout << "jumlah angka: " << sum;
    return 0;
}
