#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
float awal()
	{
		cout<<"PROGRAM HITUNG NILAI AKHIR MATERI PEMROGRAMAN C++"<<endl;
		cout<<"	"<<endl;
}
float tampilan()
{
	cout<<"			\tDAFTAR NILAI"<<endl;
	cout<<"		 \tMATERI : PEMROGRAMAN C++"<<endl;
	cout<<"============================================================================="<<endl;
	cout<<"NO.  NAMA MAHASISWA		\tNILAI			\tGRADE	"<<endl;
	cout<<"============================================================================="<<endl;
	cout<<"             |Tugas|    |PTS|    |PAS|	             |AKHIR|   "<<endl;
	cout<<"============================================================================="<<endl;
}
int main(int arge,char*argv[])
{
	int i;
	int jum;
	char ulang;
	char nama_mahasiswa[50][100];
	float nilai_tugas [10];
	float nilai_UTS [10];
	float nilai_UAS [10];
	float nilai_akhir [10];
	do
{
	awal();
	cout<<"Masukkan Jumlah Mahasiswa : ";cin>>jum;
	cout<<endl;
	for(i=1;i<=jum;i++)
{
	cout<<"Mahasiswa Ke- "<<i<<endl;
	cout<<"Nama Mahasiswa\t: ";cin>>nama_mahasiswa[i];
	cout<<"Nilai Tugas\t: ";cin>>nilai_tugas[i];
	cout<<"Nilai UTS\t: ";cin>>nilai_UTS[i];
	cout<<"Nilai UAS\t: ";cin>>nilai_UAS[i];
	nilai_akhir [i]=(nilai_tugas[i]*0.35)+(nilai_UTS[i]*0.35)+(nilai_UAS[i]*0.30);
	cout<<endl;
}
cout<<endl;
tampilan();
for(i=1;i<=jum;i++)
{
	cout<<setiosflags(ios::left)<<""<<setw(5)<<i;
	cout<<setiosflags(ios::left)<<""<<setw(10)<<nama_mahasiswa[i];
	cout<<setiosflags(ios::left)<<""<<setw(10)<<nilai_tugas[i];
	cout<<setiosflags(ios::left)<<""<<setw(10)<<nilai_UTS[i];
	cout<<setiosflags(ios::left)<<""<<setw(20)<<nilai_UAS[i];
	cout<<setiosflags(ios::left)<<""<<setw(20)<<nilai_akhir[i];
	
	if(nilai_akhir[i]>=85)
	cout<<setprecision(4)<<" "<<"A";
	else if(nilai_akhir[i]>=75)
		cout<<setprecision(4)<<" "<<"B";
	else if(nilai_akhir[i]>=60)
		cout<<setprecision(4)<<" "<<"C";
	else if(nilai_akhir[i]>=40)
		cout<<setprecision(4)<<" "<<"D";
	else if(nilai_akhir[i]<40)
		cout<<setprecision(4)<<" "<<"E";
	cout<<endl;
}
	cout<<"------------------------------------------------------------------------------"<<endl;
	cout<<endl;
	cout<<"Apakah Anda ingin Mengulangnya Kembali (Y/T)?";
	cin>>ulang;
	system("cls");
}
	while((ulang=='Y')||(ulang=='y'));
		cout<<endl<<endl;
}
