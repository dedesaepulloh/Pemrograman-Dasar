#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main (){
char kampus1[]="STMIK TASIKMALAYA";
//char kampus2[]="STMIK CIAMIS";
char thn[]="2018";
char jrs1[]="D3";
char jrs2[]="S1";
char no1[]="001";
char no2[]="002";
char *pkm1=kampus1;
//char *pkm2=kampus2;
char *pthn=thn;
char *pjrs1=jrs1;
char *pjrs2=jrs2;
char *pno1=no1;
char *pno2=no2;

int x;

cout << "Masukan NPM : ";
cin >>x;
if(x=432001201801001)
{
x +=0;
if(x=42007){
   cout << "Kampus :" <<pkm1 <<endl;
   } x +=6;
   if(x=2018)
   {
   cout << "Tahun :" <<pthn <<endl;
   }x +=10;
   if(x=01){
   cout << "Jurusan :" <<pjrs1 <<endl;
   }
   }x +=12;
   if (x=001){
   cout << "No.Urut :" <<pno1 <<endl;
   }
}
else if (x=432001201802002)
{
x +=0;
if(x=42001){
   cout << "Kampus :" <<pkm1 <<endl;
   }
   x +=6;
   if(x=2018)
   {
   cout << "Tahun :" <<pthn <<endl;
   }
   x +=10;
   if(x=02){
   cout << "Jurusan :" <<pjrs2 <<endl;
   }
   x +=12;
   if (x=002){
   cout << "No.Urut :" <<pno2 <<endl;
   }

}
getch();
}