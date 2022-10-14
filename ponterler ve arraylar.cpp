#include<stdio.h>
#include<string.h>
char *hangigun(char *hafta[],int uzunluk,int hangigun){

if(1>=hangigun<=7){
	
	return hafta[hangigun -1];
}
else { 
return NULL;

}
}

int main()  {

char *gunler[7]={"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};

char *p=hangigun(gunler,7,5);

if(gunler==0){
	
	printf("NULL");
	
}
else
{
	printf("%s",p);
}
  

	
	return 0;
}


