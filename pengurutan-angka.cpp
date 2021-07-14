#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
 
 float a[100];
 int cnt=0,i,j;
 char cond;
 do{
 
  system("cls"); // MEMBUKA TAB BARU
  printf("Masukan Angka anda yang ingin diurutkan : ");
  scanf("%f",&a[cnt]);
  
  cnd:
  printf("\nMasih ingin melanjutkan untuk Memasukan Angka? [Y/T] ");
  scanf(" %c",&cond);
 
  if (cond!='y' && cond!='Y' && cond!='t' && cond!='T'){
   system("cls");
   printf("Maaf masukan anda salah, Ulangi!\n");
   goto cnd;
  }
 
  cnt++;
 }while(cond=='Y' || cond=='y');
 
 system("cls");
 printf("Sebelum diurutkan :\n\n");
 for(i=0;i<cnt;i++){
  cout<<a[i]<<"\n";
 }
 system("pause");
 
 for(i=0;i<cnt-1;i++){	//exchange sort
  for(j=i+1;j<cnt;j++){
   if(a[i]>a[j]){
    swap(a[i],a[j]);
   
   }
  }
 }
 
 system("cls");
 printf("Sesudah diurutkan :\n\n");
 for(i=0;i<cnt;i++){
  cout<<a[i]<<"\n";
 }
 return 0;
}
