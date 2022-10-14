#include<stdio.h>
#include<string.h>

char *gaga(char *p,int indeks){
	
	int uzunluk=strlen(p);
	if(uzunluk<indeks){
		return NULL;
		
	}
	else{
		return p+indeks;
	}
}

int main() 
 {
char sayi[]="ferhat";


char *p=gaga(sayi,2);
if(p==NULL){
	printf("pointer null");
	
}
else{
	printf("%s",p);
}
  
	
	return 0;
}


