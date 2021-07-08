#include<stdio.h>
#include<string.h>
#include<ctype.h>

using namespace std;
char a[100];

main()
{
	printf("Masukkan kata = ");
	gets(a);
	strrev(a);
	strlwr(a);
	printf("Hasil = %s",a);
	
}

