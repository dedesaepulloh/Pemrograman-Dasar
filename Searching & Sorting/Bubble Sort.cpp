#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void BubbleSort(int arr[],int n)
{
	int i,j;
	for (i=0;i<n;++i)
	{
		for (j=0;j<n-i-1;++j)
		{
      	 if(arr[j] > arr[j+1])
			{
				arr[j]=arr[j]+arr[j+1];
				arr[j+1]=arr[j]-arr[j+1];
				arr[j]=arr[j]-arr[j+1];
			}
		}
   }
}

int main()
{
	int n,i;
	cout <<"Masukan Jumlah Data : ";
	cin >>n;

	int arr[100];
   for (i=0;i<n;i++)
   {
   	cout <<"Masukan Data Ke " <<(i+1)<<":";
      cin >> arr[i];
   }

   BubbleSort(arr,n);

   cout <<"Pengurutan Data :";
   for(i=0;i<n;i++)
   	cout << " -> " <<arr[i];

getch();
}