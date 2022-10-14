#include<stdio.h>
#include<string.h>
#include<math.h>
	 
int main() {
printf("strrev =dongu yardimi ile");

char ad1[10],ad2[10];
int uzunluk ,i;

printf("\n\nisim:");   scanf("%s",ad1);
uzunluk=strlen(ad1);

for(i=uzunluk-1;i>=0;i--){
	
	printf("%c",ad1[i]);
}

printf("\n\nstrrev yardimiyle");

printf("\n\nisim:");   scanf("%s",ad2);

printf("%s",strrev(ad2));

















	return 0;
}

