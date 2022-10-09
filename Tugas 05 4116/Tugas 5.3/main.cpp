#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "masukan nilai : ";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "a = 1" << endl;
    case 2:
        cout << "a = 2" << endl;
    case 3:
        cout << "a = 3" << endl;
    case 4:
        cout << "a = 4" << endl;
    case 5:
        cout << "a = 5" << endl;
        break; // meloncati program
    default:
        cout << "default";
    }
    return 0;
}

