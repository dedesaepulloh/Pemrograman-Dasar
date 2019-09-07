#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){
int i,s;
i=0;
s=0;
cout << " NAMA : DEDE SAEPULLOH " <<endl;
cout << " NPM : 432007006170090 " <<endl;
cout << " KELAS : B " <<endl <<endl;
cout << " BILANGAN GENAP " <<endl;
while(i<=100){
if(i%2==0){
cout <<i <<endl;
}
i++;
}
cout << " BILANGAN GANJIL " <<endl;
while(s<=100){
if(s%2!=0){
cout <<s <<endl;
}
s++;
}
getch();
}
