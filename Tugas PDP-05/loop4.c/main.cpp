#include <iostream>

using namespace std;

int main()
{
int hasil, rata;

for (int i=1; i<21; i++){
    cout << i << endl;
    hasil= hasil + i;
    rata= hasil/i;
}
    cout << "Jumlah = " << hasil << endl;
    cout << "Rata-rata = " << rata << endl;
    return 0;
}
