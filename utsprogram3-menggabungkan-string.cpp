#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

main()
{
	char str1 []="Selamat ";
	char str2 []="Hari Lebaran";
	char str3 []="Selamat Lebaran";
	
	// MENGGABUNGKAN STRING
	strcat(str1,str2);
	cout<<"Hasil = "<<str1<<"\n";
	cout<<"Hasil = "<<str3;
	
	getch();
}
