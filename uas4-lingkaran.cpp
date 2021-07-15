#include <iostream>
using namespace std;


luas(float a) {
	float x;
	x = 3.14 * a * a;
	return(x);
}

keliling(float a){
	float z;
	z = 2 * 3.14 * a;
	return(z);
}
int main() {
	float a,l,k;
	cout << "Menghitung Luas dan Keliling Lingkaran" << endl;
	cout << "Masukan Jari-Jari = ";
	cin >> a;
	l = luas(a);
	k = keliling(a);
	cout << "Luas Lingkaran adalah = " << l << endl;
	cout << "Keliling Lingkaran adalah = " << k << endl;
	
	return 0;
}

