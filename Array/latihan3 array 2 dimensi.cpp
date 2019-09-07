#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <iomanip.h>

int main(){
int row,col,data[4][4];

//Menginputkan data array 2 dimensi
for(row=1;row<=3;row++){
for(col=1;col<=3;col++){
cout<<"Input Baris["<<row<<"] & Kolom["<<col<<"]: ";
cin>>data[row][col];
}
cout<<endl;
}

//Menampilkan data array 2 dimensi
for(row=1;row<=3;row++){
for(col=1;col<=3;col++){
cout<<setw(4)<<data[row][col];
}
cout<<endl<<endl;
}
cout<<"Enter untuk keluar....";
getch();
return 0;
}