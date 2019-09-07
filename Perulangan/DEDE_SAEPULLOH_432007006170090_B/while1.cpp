#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){
int a,i;
i=1;
char b [100];
cout << " NAMA : DEDE SAEPULLOH " <<endl;
cout << " NPM : 432007006170090 " <<endl;
cout << " KELAS : B " <<endl;
cout << " MASUKAN KATA : ";
cin >> b;
cout << " MASUKAN JUMLAH PERULANGAN : ";
cin >> a;
while(i<=a)
{
cout <<i <<b << endl;
i++;
}

getch();
}
