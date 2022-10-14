#include<stdio.h>
#include<string.h>
#include<math.h>		 
int main()  {
    float sayi1,sayi2,sonuc1,sonuc2;
    printf("ln ni hesaplayacaginiz sayiyi giriniz=");
    scanf("%f",&sayi1);
    sonuc1=log(sayi1);
    printf("sonuc=%.2f",sonuc1);
    
    
    printf("\nlog alacaginiz sayiyi giriniz=\n");
    scanf("%f",&sayi2);
    
    sonuc2=log10(sayi2);
    printf("sonuc=%.2f",sonuc2);

	
	return 0;
}

