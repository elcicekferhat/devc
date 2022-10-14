#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	float b,cevre,r;
	int islem;
	float p=3.14;
	
	printf("1-Dairenin alani\n");
	printf("2-Cemberin cevresi\n");
	
	printf("Islemini yapmak istediginiz formulun verilen sayisini giriniz:");
	scanf("%d",&islem);
	switch(islem)
	{
		case 1:
	    printf("Islemini yapmak istediginiz cemberin yaricapini giriniz:");
     	scanf("%f",&r);
		b=p*r*r;
		printf("Dairenin alani= %f",b);
		break;
		case 2:
		printf("Islemini yapmak istediginiz cemberin yaricapini giriniz:");
	    scanf("%f",&r);
		cevre=2*p*r;
		printf("cemberin cevresi: %f",cevre);	
		break;
		default:
			printf("bilinmeyen islemci\n");
			
	}
	
	
	return 0;
}