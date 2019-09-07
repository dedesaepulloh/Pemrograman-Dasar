#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){
char nama[]="Dede Saepulloh";
char *pnama=nama;

cout << "Nama = " << nama <<endl;
cout << "pNama = " << pnama <<endl;
pnama +=12;

cout << "Setelah pnama+=12 " << nama <<endl;

cout << "Nama = " << nama <<endl;
cout << "pNama = " <<*pnama <<endl;

getch();
}
