#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <string>

main (){

string npm;
string str,a,b,c,d,km1,km2,jrs1,jrs2;
km1="432001";
km2="432002";
jrs1="01";
jrs2="02";

cout << "=======================" <<endl;
cout << "|     DAFTAR NPM      |" <<endl;
cout << "=======================" <<endl;
cout << "NPM 1 : 432001201801001" <<endl;
cout << "NPM 2 : 432001201802002" <<endl;
cout << "NPM 3 : 432002201802001" <<endl;
cout <<endl;
cout << "MASUKAN NPM :";
cin >>npm;

cout <<endl;

a=npm.substr(0,6); //kampus
b=npm.substr(6,4); //tahun
c=npm.substr(10,2); //jurusan
d=npm.substr(12,3); //no urut


if(a==km1){
cout << " KAMPUS \t: STMIK TASIKMALAYA" <<endl;
}
else if(a==km2){
cout << " KAMPUS \t: STMIK CIAMIS" <<endl;
}
cout << " TAHUN \t\t: " << b <<endl;

if(c==jrs1){
cout << " JURUSAN \t: S1 TEKNIK INFORMATIKA" <<endl;
}
else if(c==jrs2){
cout << " JURUSAN \t: D3 KOMPUTERISASI AKUTANSI" <<endl;
}
cout << " NO. URUT \t: " << d <<endl;

getch();
}