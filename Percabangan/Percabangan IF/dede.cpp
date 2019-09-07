//PERCABANGAN IF
#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main(){
int nilai;
hitung :
cout << "MASUKAN NILAI : ";
cin >> nilai;
if(nilai>=80){
cout << " LULUS DENGAN BAIK" <<endl;
}
else if (nilai>=75){
cout << "LULUS DENGAN CUKUP BAIK" <<endl;
}
else {
cout << "TIDAK LULUS" <<endl;
}
goto hitung;
getch();
}