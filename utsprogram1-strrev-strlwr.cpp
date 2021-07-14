#include<iostream>
#include<string.h>

using namespace std;
char a[100];

main()
{
	printf("Masukkan kata = ");
	gets(a);
	strrev(a);
	strlwr(a);
	cout << a << endl;
	
}

