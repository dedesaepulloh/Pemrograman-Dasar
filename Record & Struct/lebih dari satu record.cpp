#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){
int no,i;
struct{
	char npm[20];
   char nama[35];
   char jenis;
   char tempat[20];
   char tanggal[20];
   char jurusan[20];
}mahasiswa[5];
no=0;
for(i=0;i<5;i++){
no++;
cout << "Input Data Mahasiswa Ke" << no << ":" <<endl;
cout << "-----------------------"<<endl;
cout << "Masukan NPM :";
cin >> mahasiswa[i].npm;
cout << "Masukan Nama:";
gets (mahasiswa[i].nama);
cout << "Pilih (L/P) :";
cin >> mahasiswa[i].jenis;
cout << "Masukan Tempat Lahir:";
cin >> mahasiswa[i].tempat;
cout << "Masukan Tanggal Lahir:";
gets (mahasiswa[i].tanggal);
cout << "Masukan Jurusan:";
gets (mahasiswa[i].jurusan);
clrscr();
}
no=0;
for(i=0;i<5;i++){
no++;
	cout << "Output Data Mahasiswa" << no << ":" <<endl;
	cout << "--------------------"<<endl;
	cout << "NPM          :" << mahasiswa[i].npm <<endl;
	cout << "NAMA         :" << mahasiswa[i].nama <<endl;
	cout << "JENIS        :" << mahasiswa[i].jenis <<endl;
	cout << "TEMPAT LAHIR :" << mahasiswa[i].tempat <<endl;
	cout << "TANGGAL LAHIR:" << mahasiswa[i].tanggal <<endl;
	cout << "JURUSAN      :" << mahasiswa[i].jurusan <<endl;
}
getch();

}