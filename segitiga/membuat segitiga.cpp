#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){
int i,j,n;
cout << "Masukan Panjang Segitiga : "; cin >>n;
for (i=1;i<=n;i++){
	for(j=1;j<=i;j++){
   cout << "*";
   }
cout <<endl;
}
getch();
}
