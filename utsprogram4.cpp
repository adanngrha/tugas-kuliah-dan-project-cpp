#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

main ()
{
	int jumlah;
	int nilai [10];
	float total,rata;
	char nama [20][30];
	
	cout << "Jumlah mahasiswa : ";
	cin >> jumlah;
	cout << "\n";
	
	
	for (int i=1; i<=jumlah; i++){
		cout << "Nama : "; cin >> nama [i];
		cout << "Nilai : "; cin >> nilai [i];
		
		if (nilai [i] >= 6)
		cout << "Status	: Lulus \n\n";
		else
		cout << "Status	: Tidak Lulus \n\n"; 
		total = total + nilai [i];
	}
	cout << "Total		: " << total << endl;
	rata = total/jumlah;
	cout << "Rata-rata	: " << rata << endl;
	
	return 0;
}
