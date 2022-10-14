#include<stdio.h>
#include<string.h>
#include<math.h>
void  isimdondur(char arr[],int uzunluk){
	int i;
	char a;

	
	for(i=0;i<uzunluk/2.0;i++)
{
a=arr[i];
arr[i]=arr[uzunluk-1-i];
arr[uzunluk-1-i]=a;

	}	
	
}


int main() {
	char array[10];
	printf("isim:");
	scanf("%s",array);
	int stay=strlen(array);
	isimdondur(array,stay);
	printf("%s",array);
   













	return 0;
}

