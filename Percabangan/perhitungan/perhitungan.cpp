#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){
int angka,a,b,hasil;
cout << "PROGRAM PERHITUNGAN" <<endl;
cout << "1.PROGRAM MENGHITUNG LUAS PERSEGI PANJANG" <<endl;
cout << "2.PROGRAM MENGHITUNG KECEPATAN" <<endl;
cout << "3.PROGRAM MENCARI RATA-RATA" <<endl;
cout << "4.PROGRAM MENCARI JARAK" <<endl;
cout << "5.PROGRAM MENCARI GAYA BERAT" <<endl;
cout << "MASUKAN PILIHAN ANDA :";
cin >> angka;
//MENGHITUNG LUAS PERSEGI PANJANG
if(angka==1){
cout << "PROGRAM MENGHITUNG LUAS PERSEGI PANJANG"<<endl;
cout << "MASUKAN PANJANG : ";
cin >> a;
cout << "MASUKAN LEBAR : ";
cin >> b;
hasil=a*b;
cout << "Hasil nya adalah " << hasil <<endl;
}
//MENCARI KECEPATAN
else if (angka==2){
cout << "PROGRAM MENGHITUNG KECEPATAN" << endl;
cout << " MASUKAN JARAK : ";
cin >> a;
cout << " MASUKAN WAKTU : ";
cin >> b;
hasil=a/b;
cout << "Hasil nya Adalah " << hasil <<endl;
}
//MENCARI RATA-RATA
else if(angka==3){
cout << "PROGRAM MENCARI RATA-RATA" <<endl;
cout << "MASUKAN BANYAK DATA : " ;
cin >> a;
cout << "MASUKAN JUMLAH DATA : " ;
cin >> b;
hasil=a/b;
cout << "Hasilnya adalah " << hasil <<endl;
}
//MENCARI JARAK
else if(angka==4){
cout << "PROGRAM MENCARI JARAK" <<endl;
cout << "MASUKAN KECEPATAN : " ;
cin >> a;
cout << "MASUKAN WAKTU : " ;
cin >> b;
hasil=a*b;
cout << "Hasilnya adalah " << hasil <<endl;
}
//MENCARI GAYA BERAT
else if(angka==5){
cout << "PROGRAM MENCARI GAYA BERAT" <<endl;
cout << "MASUKAN MASSA : " ;
cin >> a;
cout << "MASUKAN GRAVITASI : " ;
cin >> b;
hasil=a*b;
cout << "Hasilnya adalah " << hasil <<endl;
}
else {
}
getch();
}             