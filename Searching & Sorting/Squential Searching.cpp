#include <iostream.h>
#include <conio.h>
#include <stdio.h>

main(){
int bil[5];
int bilcari;
int lokasi=-5;
cout << "Masukan 5 bilangan yang diinginkan : " <<endl;
for (int i=0;i<5;i++)
{
cin >>bil[i];
}
cout <<endl;
cout << "Masukan bilangan yang dicari :";
cin >>bilcari;
cout <<endl;

for (int w=0;w<5;w++)
{
if(bil[w]==bilcari)
lokasi=w;
}
if(lokasi !=-5)
{
cout <<"Data berhasil ditemukan ada pada lokasi :" <<lokasi+1;
cout <<endl;
}
else
cout <<"Data Tidak ditemukan";
getch();
}
