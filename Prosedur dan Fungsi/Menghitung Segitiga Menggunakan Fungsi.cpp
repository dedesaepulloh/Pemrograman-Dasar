#include <conio.h>
#include <stdio.h>
#include <iostream.h>
//Contoh Fungsi Segitiga

float segitiga(float alas,float tinggi){
float luas;
luas=0.5*alas*tinggi;
return luas;
}

main(){
float alas,tinggi;
cout << "Program Menghitung Luas Segitiga" <<endl;
cout << "--------------------------------" <<endl;
cout << "Masukan Alas : ";
cin >> alas;
cout << "Masukan Tinggi : ";
cin >> tinggi;
cout << "Luas Segitiga : "<<segitiga(alas,tinggi);
getch();
}