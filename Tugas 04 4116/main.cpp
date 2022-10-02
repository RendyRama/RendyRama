#include <iostream>

using namespace std;

int main()
{
    cout << "Input temperatur" << endl;

    int a;
    cout << "Masukkan temperatur : ";
    cin >> a;
    if (a <= 0){
    cout << "ice" << endl;
    }
    else if (a > 100) {
    cout << "gas" << endl;
    }
    else {
    cout << "liquid" << endl;
    }

    return 0;
}
