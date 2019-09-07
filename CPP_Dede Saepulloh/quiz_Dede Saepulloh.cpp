#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){
int bil1,bil2,bil3,bil4,bil5,biayakursus;
cout << "        PROGRAM KEUANGAN KURSUS    " << endl;
cout << "--------------------------------------" << endl;
cout << "Nama Siswa : Dede Saepulloh" << endl;
cout << "Biaya Pendaftaran: ";
cin >> bil1;
cout << "Biaya Semester : 250000 " << endl;
cout << "Biaya Sewa Alat: ";
cin >> bil2;
cout << "Lama Sewa: ";
cin >> bil3;
cout << "Lama Semester: ";
cin >> bil4;
cout << "Potongan : ";
cin >> bil5;
biayakursus=bil1+(bil2*bil3)+(250000*bil4)-bil5;
cout << "Total Biaya Kursus : " << biayakursus << endl;
cout << "------------------------------------" << endl;
cout << "           TERIMAKASIH              ";
getch();
}