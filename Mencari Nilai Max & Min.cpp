#include <iostream.h>
#include <conio.h>
#include <stdio.h>

main(){
int data[3],max=0,i,min;

for(i=0;i<=2;i++){
cout << "masukan nilai :";
cin >> data[i];
}
cout <<endl;
for(i=0;i<=2;i++)
{cout <<data[i] <<endl;
cout <<endl;
if(max < data[i])
{
max=data[i];
}
else if(max > data[i])
{
min=data[i];
}
}
cout <<max <<endl;
cout <<min;
getch();
}