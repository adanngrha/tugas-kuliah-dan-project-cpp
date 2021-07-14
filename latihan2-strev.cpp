
#include <conio.h>
#include <string.h>
#include <iostream>

using namespace std;
main ()
{
	char kata [20];
	cout <<"Masukan Kata : "	;
	gets (kata);
	strrev (kata);
	cout <<"Hasil Perubahan : " << kata ;
	getch ();
}
