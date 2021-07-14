#include <iostream>
#include <stdio.h>
#include <iomanip> // untuk setiosflags

using namespace std;

main ()
{
	int jumlah,nim[20],nilai[10];
	char nama [20][30];
	
	cout << "Masukkan Jumlah Data	: ";
	cin >> jumlah;
	cout << "\n";
	
	for (int i=1; i<=jumlah; i++){
		cout << "Data ke - " << i << endl;
		cout << "Nama Mahasiswa		: "; cin >> nama [i];
		cout << "NIM			: "; cin >> nim [i];
		cout << "Nilai			: "; cin >> nilai [i];
		cout << "\n";
	}
	cout << "============================================\n";
	cout << "               DATA MAHASISWA\n";
	cout << "============================================\n";
	cout << "No.   Nama                NIM      Nilai\n";
	cout << "============================================\n";
	
	for (int i=1; i<=jumlah; i++){
		cout << setiosflags(ios::left) << setw(5)<<i;			// setiosflags untuk mengatur perataan teks (rata kiri, rata kanan)
		cout << setiosflags(ios::left) << setw(20)<< nama [i];
		cout << setiosflags(ios::left) << setw(12)<< nim [i];
		cout << setiosflags(ios::left) << setw(9)<< nilai [i];	
		cout << "\n";
	}

	return 0;
}
