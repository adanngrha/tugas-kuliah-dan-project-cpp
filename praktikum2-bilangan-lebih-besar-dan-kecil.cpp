#include<iostream>

// MENENTUKAN BILANGAN YANG LEBIH BESAR DAN LEBIH KECIL
using namespace std;
int main() 
{
    int a, b;
    cout << "Menentukan bilangan terbesar 2 buah input \n";
    cout << "Masukkan bilangan pertama : "; cin >> a;
    cout << "Masukkan bilangan kedua : "; cin >> b;

    if ( a > b )
        cout << "Bilangan yang lebih besar   : " << a << endl;
    else
        cout << "Bilangan yang lebih besar   : " << b << endl;
	
	if ( b < a )
		cout << "Bilangan yang lebih kecil   : " << b << endl;
    else
        cout << "Bilangan yang lebih kecil   : " << a << endl;

    return 0;
}

