#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){
int x;
int *px;
int **ppx;

x=175;
px=&x;
ppx=&px;
cout << "Nilai x : " << x <<endl;
cout << "Nilai px : " << *px <<endl;
cout << "Nilai ppx : " << **ppx <<endl; //Bintang satu untuk menampilkan alamat,Bintang dua untuk menampilkan nilai.

getch();
}