#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float f;
    string ket;
    cout << "--------------------------------------------------------------" << endl;
    cout << "    Celcius        Farenheit       Keterangan" << endl;
    cout << "--------------------------------------------------------------" << endl;

    for (float c = 100; c >= -41; c--)
    {
        f = c * 9;
        f = f / 5 + 32;
        if (c == -41)
        {
            ket = "Cuaca Sangat Dingin Bersalju";
            cout << setprecision(3) << setw(7) << c << "           " << setw(7) << f << "           " << setw(7) << ket << endl;
        }
        if (c == -18)
        {
            ket = "Cuaca Dingin Bersalju";
            cout << setprecision(3) << setw(7) << c << "           " << setw(7) << f << "           " << setw(7) << ket << endl;
        }
        if (c == 0)
        {
            ket = "Titik Beku Air";
            cout << setprecision(3) << setw(7) << c << "           " << setw(7) << f << "           " << setw(7) << ket << endl;
        }
        if (c == 10)
        {
            ket = "Hari Yang Dingin";
            cout << setprecision(3) << setw(7) << c << "           " << setw(7) << f << "           " << setw(7) << ket << endl;
        }
        if (c == 21)
        {
            ket = "Temperatur Ruangan";
            cout << setprecision(3) << setw(7) << c << "           " << setw(7) << f << "           " << setw(7) << ket << endl;
        }
        if (c == 30)
        {
            ket = "Cuaca Pantai";
            cout << setprecision(3) << setw(7) << c << "           " << setw(7) << f << "           " << setw(7) << ket << endl;
        }
        if (c == 37)
        {
            ket = "Temperatur Tubuh";
            cout << setprecision(3) << setw(7) << c << "           " << setw(7) << f << "           " << setw(7) << ket << endl;
        }
        if (c == 40)
        {
            ket = "Air Mandi Panas";
            cout << setprecision(3) << setw(7) << c << "           " << setw(7) << f << "           " << setw(7) << ket << endl;
        }
        if (c == 100)
        {
            ket = "Air Mendidih";
            cout << setprecision(3) << setw(7) << c << "           " << setw(7) << f << "           " << setw(7) << ket << endl;
        }
    }
    cout << "--------------------------------------------------------------";
    return 0;
}
