#include <iostream>
using namespace std;

int main() {
    // PROGRAM BUS 
    int a,b;
    cout << "Satu bus 50 Penumpang" << endl;
    cout << "Penumpang yang menunggu : ";
    cin >> a;
    b = a % 50;
    b = 50 -b;
    cout << "Sisa tempat duduk yang kosong di bus terakhir "<<b;
    return 0;
}
