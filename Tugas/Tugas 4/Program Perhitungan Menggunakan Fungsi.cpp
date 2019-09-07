#include <conio.h>
#include <stdio.h>
#include <iostream.h>

//PROGRAM PERHITUNGAN MENGGUNAKAN FUNGSI

//1.MENCARI LUAS SEGITIGA
float segitiga(float alas,float tinggi){
float luas;
luas=0.5*alas*tinggi;
return luas;
}

//2.MENCARI LUAS LINGKARAN
float lingkaran(float r){
float luas;
luas=3.14*r*r;
return luas;
}

//3.MENCARI LUAS PERSEGI PANJANG
float persegi(float panjang,float lebar){
float luas;
luas=panjang*lebar;
return luas;
}

//4.MENCARI JARAK
float jarak(float kecepatan,float waktu){
float hasil;
hasil=kecepatan*waktu;
return hasil;
}

//5.MENCARI GAYA BERAT
float gaya(float massa,float gravitasi){
float hasil;
hasil=massa*gravitasi;
return hasil;
}

main(){
float alas,tinggi,r,panjang,lebar,kecepatan,waktu,massa,gravitasi;
int angka;
cout << "========================================" <<endl;
cout << "PROGRAM PERHITUNGAN MENGGUNAKAN FUNGSI" <<endl;
cout << "========================================" <<endl;
cout << "[1].PROGRAM MENCARI LUAS SEGITIGA" <<endl;
cout << "[2].PROGRAM MENCARI LUAS LINGKARAN" <<endl;
cout << "[3].PROGRAM MENCARI LUAS PERSEGI PANJANG" <<endl;
cout << "[4].PROGRAM MENCARI JARAK" <<endl;
cout << "[5].PROGRAM MENCARI GAYA BERAT" <<endl;
cout << "========================================" <<endl;
cout << "MASUKAN PILIHAN ANDA :";
cin >> angka;
cout << "========================================" <<endl;
cout <<endl;

	if(angka==1)
   {
	cout << "========================================" <<endl;
	cout << "PROGRAM MENCARI LUAS SEGITIGA"<<endl;
	cout << "========================================" <<endl;
	cout << "Masukan Alas :";
	cin >> alas;
	cout << "Masukan Tinggi :";
	cin >> tinggi;
	cout << "Luas Segitiga = " <<segitiga(alas,tinggi);
	}
   else if(angka==2)
   {
   cout << "========================================" <<endl;
	cout << "PROGRAM MENCARI LUAS LINGKARAN"<<endl;
	cout << "========================================" <<endl;
	cout << "Masukan Jari-Jari :";
	cin >> r;
   cout << "Luas Lingkaran = " <<lingkaran(r);
   }
   else if(angka==3)
   {
   cout << "========================================" <<endl;
	cout << "PROGRAM MENCARI LUAS PERSEGI PANJANG"<<endl;
	cout << "========================================" <<endl;
	cout << "Masukan Panjang :";
	cin >> panjang;
	cout << "Masukan Lebar : ";
	cin >> lebar;
   cout << "Luas Persegi Panjang = "<<persegi(panjang,lebar);
   }
   else if(angka==4)
   {
   cout << "========================================" <<endl;
	cout << "PROGRAM MENCARI JARAK"<<endl;
	cout << "========================================" <<endl;
	cout << "Masukan Kecepatan :";
	cin >> kecepatan;
	cout << "Masukan Waktu : ";
	cin >> waktu;
   cout << "Jarak Yang Ditempuh = " <<jarak(kecepatan,waktu);
   }
   else if(angka==5)
   {
   cout << "========================================" <<endl;
	cout << "PROGRAM MENCARI GAYA BERAT"<<endl;
	cout << "========================================" <<endl;
	cout << "Masukan Massa :";
	cin >> massa;
	cout << "Masukan Gravitasi : ";
	cin >> gravitasi;
   cout << "Gaya Yang Dihasilkan = " <<gaya(massa,gravitasi);
   }
   else{}

getch();
}

