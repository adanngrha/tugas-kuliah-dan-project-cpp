#include <iostream>
#include <string.h>

using namespace std;
int main()
{
       char string1 [] ="Teknik ";
       char string2 [] ="Informatika";

       cout<<"Penggabungan Dua Buah String"<<endl;
       cout<<"--------------------"<<endl;
       cout<<"Kalimat 1 : "<<string1<<endl;
       cout<<"Kalimat 2 : "<<string2<<endl;

       strcat(string1, string2);
       cout<<"\nHasil Penggabungan : "<<string1<<endl;

       return 0;

}

