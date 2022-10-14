#include<stdio.h>
#include<string.h>
#include<math.h>


	 
         
      		 
int main()  {
	
float sayi,sayi2;
int sonuc1,sonuc2;
printf("tabana yuvarlamak istediginiz sayiyi giriniz=");
scanf("%f",&sayi);
sonuc1=floor(sayi);
printf("%d\n",sonuc1);

printf("tavana yuvarlamak istediginiz sayiyi giriniz=");
scanf("%f",&sayi2);
sonuc2=ceil(sayi2);
printf("%.f",sonuc2);

	
	
	return 0;
}

