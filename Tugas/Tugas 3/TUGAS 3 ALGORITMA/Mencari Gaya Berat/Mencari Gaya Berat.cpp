#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){
int m,g,w;
cout << "       PROGRAM MENCARI GAYA BERAT       \n";
cout << "----------------------------------------\n";
cout << "Masukan Massa : ";
cin >> m;
cout << "Masukan Gravitasi : ";
cin >> g;
w=m*g;
cout << "Jadi,Gaya Berat yang Dihasilkan Adalah " << w << endl;
cout << "-----------------------------------------\n";
getch();
}
