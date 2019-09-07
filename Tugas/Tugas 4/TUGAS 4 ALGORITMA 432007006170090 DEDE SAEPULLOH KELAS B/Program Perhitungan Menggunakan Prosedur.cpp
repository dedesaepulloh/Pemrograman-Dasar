#include <conio.h>
#include <stdio.h>
#include <iostream.h>

//PROGRAM PERHITUNGAN MENGGUNAKAN PROSEDUR

//1.MENCARI LUAS SEGITIGA
void segitiga(){
float luas,a,t;
char y;
cout << "====================================================" <<endl;
cout << "PROGRAM MENCARI LUAS SEGITIGA"<<endl;
cout << "====================================================" <<endl;
cout << "Masukan Alas :";
cin >> a;
cout << "Masukan Tinggi :";
cin >> t;
luas=0.5*a*t;
cout << "Luas Segitiga = "<<luas <<endl;
cout <<endl;
cout << "Keterangan :" <<endl;
cout << "y = Digunakan untuk menghitung program yang sama" <<endl;
cout << "n = Digunakan untuk kembali keawal pemilihan program" <<endl;
cout << "====================================================" <<endl;
cout << "Hitung Lagi Luas Segitiga (y/n)?";
cin >>y;
clrscr();
if(y=='y'){segitiga();}
else{}
}

//2.MENCARI LUAS LINGKARAN
void lingkaran(){
float luas,j;
char y;
cout << "====================================================" <<endl;
cout << "PROGRAM MENCARI LUAS LINGKARAN"<<endl;
cout << "====================================================" <<endl;
cout << "Masukan Jari-Jari :";
cin >> j;
luas=3.14*j*j;
cout << "Luas Lingkaran = "<<luas <<endl;
cout <<endl;
cout << "Keterangan :" <<endl;
cout << "y = Digunakan untuk menghitung program yang sama" <<endl;
cout << "n = Digunakan untuk kembali keawal pemilihan program" <<endl;
cout << "====================================================" <<endl;
cout << "Hitung Lagi Luas Lingkaran (y/n)?";
cin >>y;
clrscr();
if(y=='y'){lingkaran();}
else{}
}

//3.MENCARI LUAS PERSEGI PANJANG
void persegip(){
float luas,p,l;
char y;
cout << "====================================================" <<endl;
cout << "PROGRAM MENCARI LUAS PERSEGI PANJANG"<<endl;
cout << "====================================================" <<endl;
cout << "Masukan Panjang :";
cin >> p;
cout << "Masukan Lebar : ";
cin >> l;
luas=p*l;
cout << "Luas Persegi Panjang = "<<luas <<endl;
cout <<endl;
cout << "Keterangan :" <<endl;
cout << "y = Digunakan untuk menghitung program yang sama" <<endl;
cout << "n = Digunakan untuk kembali keawal pemilihan program" <<endl;
cout << "====================================================" <<endl;
cout << "Hitung Lagi Luas Persegi Panjang (y/n)?";
cin >>y;
clrscr();
if(y=='y'){persegip();}
else{}
}

//4.MENCARI JARAK
void jarak(){
float j,k,w;
char y;
cout << "====================================================" <<endl;
cout << "PROGRAM MENCARI JARAK"<<endl;
cout << "====================================================" <<endl;
cout << "Masukan Kecepatan :";
cin >> k;
cout << "Masukan Waktu : ";
cin >> w;
j=k*w;
cout << "Jarak Yang Ditempuh = "<<j <<endl;
cout <<endl;
cout << "Keterangan :" <<endl;
cout << "y = Digunakan untuk menghitung program yang sama" <<endl;
cout << "n = Digunakan untuk kembali keawal pemilihan program" <<endl;
cout << "====================================================" <<endl;
cout << "Hitung Lagi Jarak (y/n)?";
cin >>y;
clrscr();
if(y=='y'){jarak();}
else{}
}

//5.MENCARI GAYA BERAT
void gaya(){
float w,m,g;
char y;
cout << "====================================================" <<endl;
cout << "PROGRAM MENCARI GAYA BERAT"<<endl;
cout << "====================================================" <<endl;
cout << "Masukan Massa : ";
cin >> m;
cout << "Masukan Gravitasi : ";
cin >> g;
w=m*g;
cout << "Gaya Berat Yang Dihasilkan = "<<w <<endl;
cout <<endl;
cout << "Keterangan :" <<endl;
cout << "y = Digunakan untuk menghitung program yang sama" <<endl;
cout << "n = Digunakan untuk kembali keawal pemilihan program" <<endl;
cout << "====================================================" <<endl;
cout << "Hitung Lagi Gaya Berat (y/n)?";
cin >>y;
clrscr();
if(y=='y'){gaya();}
else{}
}

main(){
int angka;
pilih :
cout << "========================================" <<endl;
cout << "PROGRAM PERHITUNGAN MENGGUNAKAN PROSEDUR" <<endl;
cout << "========================================" <<endl;
cout << "[1].PROGRAM MENCARI LUAS SEGITIGA" <<endl;
cout << "[2].PROGRAM MENCARI LUAS LINGKARAN" <<endl;
cout << "[3].PROGRAM MENCARI LUAS PERSEGI PANJANG" <<endl;
cout << "[4].PROGRAM MENCARI JARAK" <<endl;
cout << "[5].PROGRAM MENCARI GAYA BERAT" <<endl;
cout << "[0].EXIT" <<endl;
cout << "========================================" <<endl;
cout << "MASUKAN PILIHAN ANDA :";
cin >> angka;
cout << "========================================" <<endl;
cout <<endl;
clrscr();
   if(angka==1){segitiga ();}
   else if(angka==2){lingkaran();}
   else if(angka==3){persegip();}
   else if(angka==4){jarak();}
   else if(angka==5){gaya();}
   else if(angka==0){return (0);}
   else{}
goto pilih;
getch();
}


