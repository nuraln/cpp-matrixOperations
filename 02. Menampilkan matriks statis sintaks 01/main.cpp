#include <stdio.h>
#include <conio.h>
using namespace std; 

int main (){
	int matriks [3][3];
	int baris, kolom;
    printf ("Masukan Data\n");
    for (baris = 0; baris < 3; baris++){
  		for (kolom = 0; kolom < 3; kolom++){
   			printf ("Masukan angka : ");
   			scanf ("%d",&matriks[baris][kolom]);
  		}
 	}
 
 	printf ("Hasilnya adalah : \n");
 	for (baris = 0; baris < 3; baris++){
    	for (kolom = 0; kolom < 3; kolom++){ 
   			printf ("%d",matriks[baris][kolom]);
   			printf (" ");
  		}
  		printf ("\n");
 	}
 getch ();
}
