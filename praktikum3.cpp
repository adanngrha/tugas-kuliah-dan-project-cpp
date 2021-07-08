#include <iostream>
#include <string.h>
#include <stdio.h>
 
using namespace std;
 
int main(){
 
        char nama[20];
        int lama_pinjam,denda,total,bayar;
        int harga_buku[3]={1500,1000,500};
        string kode;
   
   
        cout<<"Perpustakan IT-PLN\n";
        cout<<"---------------------------------------------------\n";
        cout<<"|  	  GOLONGAN HARGA SEWA BUKU PER 7 HARI		 |\n";
        cout<<"---------------------------------------------------\n";
        cout<<"|      		 A   	     |     	   Rp1500        |\n";
        cout<<"|      		 B   	     |  	   Rp1000        |\n";
        cout<<"|      		 C           |   	   Rp500         |\n";
        cout<<"---------------------------------------------------\n";
        cout<<"Nama Peminjam    : ";
        gets(nama);
        cout<<"Golongan Buku [A/B/C]    : ";
        cin>>kode;
        cout<<"Lama Peminjaman	: ";
        cin>>(lama_pinjam);
		
		
		if(lama_pinjam>7){
			denda=(lama_pinjam-7)*100;
		}
		else{
			denda=0;
		}
		
		
        if(kode=="A"||kode=="A"){
       		total=harga_buku[0]*lama_pinjam;
       		bayar=harga_buku[0]*lama_pinjam-denda;
       		cout<<"\n\n\n";
            cout<<"Perpustakaan IT-PLN\n";
            cout<<"Pembayaran Peminjaman Buku\n";
            cout<<"-------------------------------------------";
            cout<<"\nNama Peminjam : ";
            cout<<nama;
            cout<<"\nHarga Sewa Buku : ";
            cout<<harga_buku[0];
            cout<<"\nLama Peminjaman : ";
            cout<<lama_pinjam;
            cout<<" Hari\nJumlah Bayar : ";
            cout<<total;
            cout<<"\nBesar Denda : ";
            cout<<denda;
            cout<<"\n-------------------------------------------";
            cout<<"\nJumlah yang harus dibayar Rp";
            cout<<bayar;
       
       
        }else if(kode=="B"||kode=="B"){
       		total=harga_buku[1]*lama_pinjam;
       		bayar=harga_buku[1]*lama_pinjam-denda;
       		cout<<"\n\n\n";
            cout<<"Perpustakaan IT-PLN\n";
            cout<<"Pembayaran Peminjaman Buku\n";
            cout<<"-------------------------------------------";
            cout<<"\nNama Peminjam : ";
            cout<<nama;
            cout<<"\nHarga Sewa Buku : ";
            cout<<harga_buku[1];
            cout<<"\nLama Peminjaman : ";
            cout<<lama_pinjam;
            cout<<" Hari\nJumlah Bayar : ";
            cout<<total;
            cout<<"\nBesar Denda : ";
            cout<<denda;
            cout<<"\n-------------------------------------------";
            cout<<"\nJumlah yang harus dibayar Rp";
            cout<<bayar;
       
       
        }else if(kode=="C"||kode=="C"){
       		total=harga_buku[2]*lama_pinjam;
       		bayar=harga_buku[2]*lama_pinjam-denda;
       		cout<<"\n\n\n";
            cout<<"Perpustakaan IT-PLN\n";
            cout<<"Pembayaran Peminjaman Buku\n";
            cout<<"-------------------------------------------";
            cout<<"\nNama Peminjam : ";
            cout<<nama;
            cout<<"\nHarga Sewa Buku : ";
            cout<<harga_buku[2];
            cout<<"\nLama Peminjaman : ";
            cout<<lama_pinjam;
            cout<<" Hari\nJumlah Bayar : ";
            cout<<total;
            cout<<"\nBesar Denda : ";
            cout<<denda;
            cout<<"\n-------------------------------------------";
            cout<<"\nJumlah yang harus dibayar Rp";
            cout<<bayar;
        }  
}
