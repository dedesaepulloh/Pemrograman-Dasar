#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){
int x,y;
int *px;

x=45;
y=x;
px=&x;
cout << "Nilai dari x : " << x <<endl;
cout << "Nilai dari y : " << y <<endl;
cout << "Alamat px : " << px <<endl;
cout << "Nilai px : " << *px <<endl;

getch();
}