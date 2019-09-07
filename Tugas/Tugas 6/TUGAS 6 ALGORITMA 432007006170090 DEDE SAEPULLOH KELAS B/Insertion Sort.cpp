#include <iostream.h>
#include <conio.h>
#include <stdio.h>


//Insertion Sort
int main()
{
  int n, array[1000], c, d, t;

  cout <<"Masukkan Banyak Bilangan : ";
  cin >>n;
clrscr();
  cout <<"Masukkan " << n << " Bilangan :"<<endl;

  for (c = 0; c < n; c++) {
    cin >>array[c];
  }

  for (c = 1 ; c <= n - 1; c++) {
    d = c;

    while ( d > 0 && array[d] < array[d-1]) {
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;

      d--;
    }
  }
cout <<endl;
  cout <<"Bilangan Diurutkan Menjadi  :"<<endl;

  for (c = 0; c <= n - 1; c++) {
    cout <<array[c] <<endl;
  }
getch();
}
