#include <iostream>
using namespace std;

int main()
{
    int x, a = 0, b = 1, c = 0;

    cout << "Ketik batas Deret bilangan fibonacci :  ";
    cin >> x;
	cout << endl;
    cout << "Deret fibonacci: ";

    for (int i = 1; i <= x; ++i){
        if(i == 1)
        {
            cout << " " << a <<" ";
            continue;
        }
        if(i == 2)
        {
            cout << b << " ";
            continue;
        }
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }
    return 0;
}
