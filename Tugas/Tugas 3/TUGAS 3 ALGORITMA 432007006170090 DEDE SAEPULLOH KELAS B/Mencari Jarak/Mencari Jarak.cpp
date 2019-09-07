#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){
int kecepatan,waktu,jarak;
cout << "     PROGRAM MENCARI JARAK    \n";
cout << "------------------------------\n";
cout << "Masukan Kecepatan : ";
cin >> kecepatan;
cout << "Masukan Waktu : ";
cin >> waktu;
jarak=kecepatan*waktu;
cout << "Jadi,Jarak yang Ditempuh Adalah " << jarak << endl;
cout << "-------------------------------\n";
getch();
}
