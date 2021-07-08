#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Pegawai{
public:
	string nama;
	int jam;
};

int main ()
{
	int i, jumlah;
	string tanggal;
	int honor,totalgaji;
	int lembur [100];
	int total [30];
	Pegawai data [10];
	
	cout << "PT ABCDEFG" << endl;
	cout << "Jumlah			: ";
	cin >> jumlah;
	cout << "Tanggal Entri		: ";
	cin >> tanggal;
	cout << "__________________" << endl;
	
	for (int i=1; i<=jumlah; i++){
		cout << "Data Ke-" << i << endl;
		cout << "Nama Pegawai			: ";
		cin >> data [i].nama;
		cout << "Jumlah Jam Kerja		: ";
		cin >> data [i].jam;
	honor = 150000;
		if (data [i].jam > 8)
		lembur [i] = (data [i].jam-8)*75000;
		else
		lembur [i] = 0;	
	total [i] = honor + lembur [i];
	}
	cout << "\n";
	cout << "\n";
	cout << "PT ABCDEFG" << endl;
	cout << "Tanggal				: " << tanggal << endl;
	cout << "-------------------------------------------------\n" ;
	cout << "No.    Nama       Honor     Jumlah     Honor     Total     \n";
	cout << "       Pegawai              Jam Kerja  Lembur    Honor     \n";
	
	
	for (int i=1; i<=jumlah; i++){
		cout << setiosflags(ios::left) << setw(8) << i;
		cout << setiosflags(ios::left) << setw(9) << data [i].nama;
		cout << setiosflags(ios::left) << setw(12) << honor;
		cout << setiosflags(ios::left) << setw(9) << data [i].jam;
		cout << setiosflags(ios::left) << setw(10) << lembur [i];
		cout << setiosflags(ios::left) << setw(9) << total [i];	
		cout << "\n";
		totalgaji=total [i] + total [i];
		cout << "\n";
	}
	cout << "-------------------------------------------------\n";
	
	cout << "Total Gaji Pegawai Sebesar : " << totalgaji;
	return 0;
}
