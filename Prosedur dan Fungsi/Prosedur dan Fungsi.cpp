#include <conio.h>
#include <stdio.h>
#include <iostream.h>

//PENDEKLARASIAN :

//Contoh Prosedur
void cetak()
{
	cout << "STMIK TASIKMALAYA"<< endl;
   cout << "JL"<<endl;
   cout << "RE"<<endl;
   cout << "MARTADINATA"<<endl;
}

//Contoh Fungsi
int penjumlahan(int bil1,int bil2)  // tanda ( ) diisi dengan parameter
{
 int hasil;
 hasil=bil1+bil2;
 return hasil;
}

//PEMANGGILAN :

main(){
cetak();
cetak();

cout << penjumlahan(2,3)<<endl;
cout << penjumlahan(5,3)<<endl;
cout << penjumlahan(4,3)<<endl;
cout << penjumlahan(6,3)<<endl;
cout << penjumlahan(7,3)<<endl;
cout << penjumlahan(8,3)<<endl;
getch();
}