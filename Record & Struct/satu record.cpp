#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){
struct{
	char npm[20];
   char nama[35];
   char jenis;
   char tempat[20];
   char tanggal[20];
   char jurusan[20];
}mahasiswa;

cout << "Input Data Mahasiswa"<<endl;
cout << "--------------------"<<endl;
cout << "Masukan NPM :";
cin >> mahasiswa.npm;
cout << "Masukan Nama:";
gets (mahasiswa.nama);
cout << "Pilih (L/P) :";
cin >> mahasiswa.jenis;
cout << "Masukan Tempat Lahir:";
cin >> mahasiswa.tempat;
cout << "Masukan Tanggal Lahir:";
gets (mahasiswa.tanggal);
cout << "Masukan Jurusan:";
gets (mahasiswa.jurusan);
clrscr();
cout << "Output Data Mahasiswa"<<endl;
cout << "--------------------"<<endl;
cout << "NPM          :" << mahasiswa.npm <<endl;
cout << "NAMA         :" << mahasiswa.nama <<endl;
cout << "JENIS        :" << mahasiswa.jenis <<endl;
cout << "TEMPAT LAHIR :" << mahasiswa.tempat <<endl;
cout << "TANGGAL LAHIR:" << mahasiswa.tanggal <<endl;
cout << "JURUSAN      :" << mahasiswa.jurusan <<endl;

getch();

}