/* Nama file : modul5-2.cpp
	Deklarasi : menghitung pangkat dari suatu bilangan */
#include <iostream.h>
#include <conio.h>

int bil,pangkat;
int perpangkatan();

int main()
	{ cout<<"Masukkan bilangan yang akan dipangkatkan : ";
     cin>>bil;
     cout<<"Masukkan pangkat dari bilangan tersebut : ";
     cin>>pangkat;
     cout<<"Hasilnya adalah : "<<perpangkatan();
     return (0);
   }

int perpangkatan()
	{ int i, hasil=1;
     if (pangkat < 0)
     		hasil=0;
     else
     { for (i=0; i<pangkat; i++)
     			hasil*=bil;
     }
     return(hasil);
   }
