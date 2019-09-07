#include <iostream.h>
#include <conio.h>
#include <stdio.h>

main(){
int a,i,j=0;
float max=0;
float min,rata;
struct {
char npm[20];
char nama[20];
float absen;
float tugas;
float uts;
float uas;
float akhir;
char grade;
}mahasiswa[4];

cout << "\t\t   ALGORITMA & PEMROGRAMAN DASAR" <<endl;
cout << "========================================================================"<<endl;

//Input
cout << "Masukan Jumlah Mahasiswa : ";
cin >> a;
for(i=1;i<=a;i++)
{
cout << "Masukan NPM :";
cin >> mahasiswa[i].npm;
cout << "Masukan Nama :";
gets (mahasiswa[i].nama);
cout <<"Masukan Jumlah Absen :";
cin >> mahasiswa[i].absen;
cout << "Masukan Nilai Tugas :";
cin >> mahasiswa[i].tugas;
cout << "Masukan Nilai UTS :";
cin >> mahasiswa[i].uts;
cout << "Masukan Nilai UAS :";
cin >> mahasiswa[i].uas;
cout <<endl;
}
clrscr();

cout << "\t\t    REKAP NILAI MATAKULIAH ALGORITMA" <<endl;
cout << "\t\tDOSEN : CEPI RAHMAT HIDAYAT,S.KOM, M.KOM " <<endl;
cout << "========================================================================"<<endl;
gotoxy (1,4);cout <<"NO |";
gotoxy (5,4);cout <<"NPM |";
gotoxy (11,4);cout <<"Nama   |";
gotoxy (20,4);cout <<"Kehadiran |";
gotoxy (32,4);cout <<"Tugas |";
gotoxy (40,4);cout <<"UTS |";
gotoxy (45,4);cout <<"UAS |";
gotoxy (51,4);cout <<"Nilai Akhir |";
gotoxy (65,4);cout <<"Grade |" <<endl;
cout << "========================================================================"<<endl;
for(i=1;i<4;i++)
{

//Nilai Akhir
mahasiswa[i].akhir=((mahasiswa[i].absen/mahasiswa[i].absen*0.2)*100)+(mahasiswa[i].tugas*0.2)+(mahasiswa[i].uts*0.25)+(mahasiswa[i].uas*0.35);

//Grade
if(mahasiswa[i].akhir >=85 && mahasiswa[i].akhir <=100)
{
mahasiswa[i].grade='A';
}
else if(mahasiswa[i].akhir >=75 && mahasiswa[i].akhir <=84)
{
mahasiswa[i].grade='B';
}
else if(mahasiswa[i].akhir >=65 && mahasiswa[i].akhir <=74)
{
mahasiswa[i].grade='C';
}
else if(mahasiswa[i].akhir >=55 && mahasiswa[i].akhir <=64)
{
mahasiswa[i].grade='D';
}
else if(mahasiswa[i].akhir <=54)
{
mahasiswa[i].grade='E';
}

//Output
j++;
if(i==1){
gotoxy(1,6);cout <<j;
gotoxy(5,6);cout << mahasiswa[1].npm;
gotoxy(11,6);cout << mahasiswa[1].nama;
gotoxy(20,6);cout << mahasiswa[1].absen;
gotoxy(32,6);cout << mahasiswa[1].tugas;
gotoxy(40,6);cout << mahasiswa[1].uts;
gotoxy(45,6);cout << mahasiswa[1].uas;
gotoxy(51,6);cout << mahasiswa[1].akhir;
gotoxy(65,6);cout << mahasiswa[1].grade <<endl;
}
else if(i==2){
gotoxy(1,7);cout <<j;
gotoxy(5,7);cout << mahasiswa[2].npm;
gotoxy(11,7);cout << mahasiswa[2].nama;
gotoxy(20,7);cout << mahasiswa[2].absen;
gotoxy(32,7);cout << mahasiswa[2].tugas;
gotoxy(40,7);cout << mahasiswa[2].uts;
gotoxy(45,7);cout << mahasiswa[2].uas;
gotoxy(51,7);cout << mahasiswa[2].akhir;
gotoxy(65,7);cout << mahasiswa[2].grade <<endl;
}
else if(i==3){
gotoxy(1,8);cout <<j;
gotoxy(5,8);cout << mahasiswa[3].npm;
gotoxy(11,8);cout << mahasiswa[3].nama;
gotoxy(20,8);cout << mahasiswa[3].absen;
gotoxy(32,8);cout << mahasiswa[3].tugas;
gotoxy(40,8);cout << mahasiswa[3].uts;
gotoxy(45,8);cout << mahasiswa[3].uas;
gotoxy(51,8);cout << mahasiswa[3].akhir;
gotoxy(65,8);cout << mahasiswa[3].grade <<endl;
}

//Min & Max
if(max < mahasiswa[i].akhir)
{
max=mahasiswa[i].akhir;
}
else if(max > mahasiswa[i].akhir)
{
min=mahasiswa[i].akhir;
}
}

//Rata - rata
rata=(mahasiswa[1].akhir + mahasiswa[2].akhir + mahasiswa[3].akhir)/3;
cout << "========================================================================"<<endl;
cout << "Nilai Tertinggi = " <<max <<endl;
cout << "Nilai Terendah = " <<min <<endl;
cout << "Rata-rata Nilai = " <<rata ;
getch();
}

//Dede Saepulloh Kelas B Tingkat 1
