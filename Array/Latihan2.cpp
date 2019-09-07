#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){
char nama[5][35];
int i;
//Perulangan menginputkan data array
for(i=0;i<5;i++)
{
	cout << "Masukan Nama Ke " <<i<<" : ";
   gets(nama[i]);
   clrscr();
}
//Perulangan menampilkan data array
for(i=0;i<5;i++)
{
  cout << "Nama Ke "<<i<<" "<<nama[i]<<endl;
}
getch();
}