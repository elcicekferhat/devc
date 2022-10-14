#include<stdio.h>
#include<string.h>
#include<math.h>
	 
int main() {
char takim[]="galatasaray",cevap[100];
int hak=5;

do
{
	
	hak--;
	printf("dunyanin en buyuk takiminin ismi nedir?");
	scanf("%s",cevap);
	
	
if(strcmp(takim,cevap)==0){
	printf("soruyu bildiniz tebrikler:))");
	break;
}
else{
	printf("\nyanlis cevap uzgunum\n\n");
	
	printf("%d  :  deneme hakkiniz kaldi\n\n",hak);

	
}

}
while(hak!=0);
	
	






	return 0;
}

