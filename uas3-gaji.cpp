#include <iostream>
using namespace std;

int main() {
	int hendra,nurul,alia,budi,setya,sari,agus,rata_rata;
	hendra = 9000000;
	nurul = 8500000;
	alia = 8250000;
	budi = 7430000;
	setya = 6700000;
	sari = 7600000;
	agus = 6000000;
	// GAJI
	cout << "GAJI KARYAWAN" << endl;
	cout << "Hendra = 9000000" << endl;
	cout << "Nurul  = 8500000" << endl;
	cout << "Alia = 8250000" << endl;
	cout << "Budi = 7430000" << endl;
	cout << "Setya = 6700000" << endl;
	cout << "Sari = 7600000" << endl;
	cout << "Agus = 6000000\n" << endl;
	
	
	// MENCARI GAJI >= 8000k
	cout <<"Orang yang gajinya >= 8000000 antara lain = "<< endl;
	if (hendra >= 8000000) {
		cout << "Hendra" << endl;
	}
	if (nurul >= 8000000 ) {
		cout << "Nurul" << endl;
	}
	 if (alia >= 8000000 ) {
		cout << "Alia" << endl;
	}
	 if (budi >= 8000000 ) {
		cout << "Budi" << endl;
	}
	 if (setya >= 8000000 ) {
		cout << "Setya" << endl;
	}
	 if (sari >= 8000000 ) {
		cout << "Sari" << endl;
	}
	 if (agus >= 8000000 ) {
		cout << "Agus" << endl;
	}
	// RATA-RATA
	rata_rata = (hendra+nurul+alia+budi+setya+sari+agus)/7 ;
	cout << "\nRata-rata Gaji 7 orang tersebut adalah = " << rata_rata << endl;
	return 0;
}
