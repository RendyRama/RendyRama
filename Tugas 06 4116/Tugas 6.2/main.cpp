#include <iostream>

using namespace std;

int main()
{
    int x;
    int i,a,b,fpb,kpk;

    cout << "1. KPK" << endl;
    cout << "2. FPB" << endl;
    cout << "Pilih angka :";
    cin >> x;

    switch(x)

    {
    case 1 :
        {
            cout << "KPK" << endl;
            cout << "Masukkan angka pertama : " << endl;
            cin >> a;
            cout << "Masukkan angka kedua : " << endl;
            cin >> b;

            kpk = 0;

            for(i = 1; i <= b; i++)
            {
                kpk = kpk + a;
                if(kpk%b == 0)
                {
                    cout << "KPK : " << kpk << endl;
                    break;
                }
            }
        }

    case 2 :
        {
            cout << "FPB" << endl;
            cout << "Masukkan angka pertama : " << endl;
            cin >> a;
            cout << "Masukkan angka kedua : " << endl;
            cin >> b;

        fpb = a%b;

        while (fpb != 0)
        {
            a = b;
            b = fpb;
            fpb = a%b;
        }
        cout << "FPB : " << b << endl;
        break;
    }

default :
    {
        cout << "Error!!" << endl;
    }
}
    return 0;
}
