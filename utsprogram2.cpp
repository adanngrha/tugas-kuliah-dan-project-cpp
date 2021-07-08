#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>

using namespace std;
int main ()
{
	char kata1 [20];
	char kata2 [20];
	char kata3 [20];
	char kata4 [20];
	char kata5 [20];
	
	cout << "Masukkan kata : "; cin >>kata1;
	cout << "Masukkan kata : "; cin >>kata2;
	cout << "Masukkan kata : "; cin >>kata3;
	cout << "Masukkan kata : "; cin >>kata4;
	cout << "Masukkan kata : "; cin >>kata5;
	
	strrev (kata1);
	strrev (kata2);
	strrev (kata3);
	strrev (kata4);
	strrev (kata5);
	
	strcat(kata1, " ");
	strcat(kata2, " ");
	strcat(kata3, " ");
	strcat(kata4, " ");
	strcat(kata5, " ");
	
	cout << "Hasil : "  <<kata1<<kata2<<kata3<<kata4<<kata5<<endl;
	getch ();
}
