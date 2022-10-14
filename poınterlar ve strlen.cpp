#include<stdio.h>
#include<string.h>

int benimstrlen(char *p){
	
	int i=0;
	int uzunluk=0;
	
	for(;p[i]!='\0';i++){
		
		uzunluk++;
	}
	return uzunluk;
}

int main() 
 {
	char sayi[]="ferhat";
	
	printf("%d",benimstrlen(sayi));
	
  
  
	
	return 0;
}