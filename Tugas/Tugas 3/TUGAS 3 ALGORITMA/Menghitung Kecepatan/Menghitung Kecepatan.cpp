#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){
int jarak,waktu,kecepatan;
cout << "PROGRAM MENGHITUNG KECEPATAN \n";
cout << "---------------------------- \n";
cout << "Masukan Jarak : ";
cin >> jarak;
cout << "Masukan Waktu : ";
cin >> waktu;
kecepatan=jarak/waktu;
cout << "Jadi,Kecepatannya Adalah " << kecepatan << endl;
cout << "----------------------------";

getch();
}
