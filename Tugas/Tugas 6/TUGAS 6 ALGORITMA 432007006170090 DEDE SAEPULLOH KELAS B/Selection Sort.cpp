#include <iostream.h>
#include <conio.h>
#include <stdio.h>

main(){
int i,n,input,data[100],masuk,simpan;

cout <<"Masukan Banyak Bilangan : ";
cin >>masuk;

for(i=1;i<=masuk;i++)
	{
	cout << "Bilangan " <<i <<" : ";
	cin >> data[i];
	}
for(i=1;i<=masuk;i++)
	{
   	for(n=i+1;n<=masuk;n++)
      {
       	if(data[i]<data[n])
         {
         	simpan=data[i];
            data[i]=data[n];
            data[n]=simpan;
         }
      }
   }
   cout <<endl;
   cout << "Bilangan Diurutkan Dari Yang Paling Besar Ke Yang Kecil : "<<endl;
   cout <<endl;
   for(i=1;i<=masuk;i++)
   {
    cout <<data[i] <<"\t";
   }
getch();
}