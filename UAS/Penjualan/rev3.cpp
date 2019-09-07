#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>


void main() {
	string kodeBarang[100], namaBarang[100], satuan[100];
	long harga[100], bayar, kembali, QTY[100], subTotal[100];
   double totalBayar = 0;
	char lagi;
   int jumlahBarang = 1, i;

   clrscr;
   do {
   	cout << "\t\tPROGRAM PENJUALAN BARANG" << endl;
      cout << "===============================" << endl;
      cout << "Kode Barang\t: "; cin >> kodeBarang[jumlahBarang];
      cout << "Nama Barang\t: "; cin >> namaBarang[jumlahBarang];
      cout << "Satuan\t\t: "; cin >> satuan[jumlahBarang];
      cout << "Harga\t\t: "; cin >> harga[jumlahBarang];
      cout << "QTY\t\t\t: "; cin >> QTY[jumlahBarang];
      subTotal[jumlahBarang] = QTY[jumlahBarang] * harga[jumlahBarang];
      totalBayar += subTotal[jumlahBarang];
      cout << "Tambah Lagi ? (y/n) "; cin >> lagi;
      if (lagi != 'y') {
      	lagi = 'n';
      } else {
      	jumlahBarang+=1;
      }
   }while (lagi == 'y' || lagi == 'Y');
   clrscr();
   // Head
   for (int i = 1; i <= jumlahBarang; i++) {
   	cout << i << "  " << kodeBarang[i] << "\t" << namaBarang[i] << "  " <<
      satuan[i] << "  " << harga[i] << " " << QTY[i] << "  " << subTotal[i] << endl;
   }
   bayarsiah:
   cout << "Total Bayar : " << totalBayar << endl;
   cout << "Bayar       : "; cin >> bayar;
   if (bayar < totalBayar) {
   	cout << "Maaf Gak bisa Kasbon " << endl;
      goto bayarsiah;
   } else {
   	kembali = bayar - totalBayar;
   }
   cout << "Kembali     : " << kembali << endl;
   getch();
}
