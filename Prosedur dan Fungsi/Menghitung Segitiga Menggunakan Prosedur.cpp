#include <conio.h>
#include <stdio.h>
#include <iostream.h>

//Prosedur Segitiga
void segitiga()
{
float luas,alas,tinggi;
cout << "Program Menghitung Luas Segitiga"<<endl;
cout << "--------------------------------"<<endl;
cout << "Masukan Alas :";
cin >> alas;
cout << "Masukan Tinggi :";
cin >> tinggi;
luas=0.5*alas*tinggi;
cout << "Luas Segitiga = "<<luas <<endl;
cout <<endl;
}

main(){
char pilih;
pilih='y';
while(pilih=='y')
{
	segitiga();
   cout << "Hitung Lagi (y/t)?";
   cin >> pilih;
   clrscr();
}
return (0);
getch();
}