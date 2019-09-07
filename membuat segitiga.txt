#include <iostream.h>
#include <conio.h>
main(){
 int i , j , k, l ;
 cout<<"Masukan tinggi segitiga ";
 cin>>l;
 for(i=l;i>=0;i--){
  for(j=i;j>=0;j--){
   cout<<" ";
  }
  for(k=1;k<=l-i;k++){
   cout<<"*";
  }
  for(k=1;k<l-i;k++){
   cout<<"*";
  }
  cout<<endl;
    }
 getch();
}
