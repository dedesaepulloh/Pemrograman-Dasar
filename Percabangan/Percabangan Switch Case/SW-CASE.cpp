#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){
int bulan;
cout << " MASUKAN ANGKA BULAN :" ;
cin >> bulan;

switch (bulan){
	case 1:
   cout << "Januari";
   break;
   case 2:
   cout << "Februari";
   break;
   case 3:
   cout << "Maret";
   break;
   case 4:
   cout << "April";
   break;
   case 5:
   cout << "Mei";
   break;
   case 6:
   cout << "Juni";
   break;
   case 7:
   cout << "Juli";
   break;
   case 8:
   cout << "Agustus";
   break;
   case 9:
   cout << "September";
   break;
   case 10:
   cout << "Oktober";
   break;
   case 11:
   cout << "November";
   break;
   case 12:
   cout << "Desember";
   break;
   default:
   cout << "ANGKA YANG ANDA MASUKAN SALAH";
}
getch();
}
