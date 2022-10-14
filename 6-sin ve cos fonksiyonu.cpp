#include<stdio.h>
#include<string.h>
#include<math.h>		 
int main()  {
  float sayi1,sayi2,derece1,derece2;
  float p= 3.14159;
  
  
  printf("sin derecesini giriniz=");
  scanf("%f",&derece1);
  sayi1=sin(derece1*p/180.0);
  printf("\nsin sonuc=%.1f",sayi1);
  
  printf("\ncos derecesini giriniz=");
  scanf("%f",&derece2);
  sayi2=cos(derece2*p/180.0);
  printf("cos sonuc=%.1f",sayi2);
	
	return 0;
}

